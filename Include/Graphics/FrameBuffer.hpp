#include <Defs.hpp>

namespace Dot{

    struct Color{
        float red;
        float green;
        float blue;
        float alpha;
    };

    class FrameBuffer {
        public:
            enum class ClearBuffersType{
                ColorBuffers,
                DepthBuffer 
            };
        public:
            FrameBuffer(void);
            virtual ~FrameBuffer(void);

            virtual void Clear(void) const;
            /*Clear's the */

            void SetClearColor(const Color& clear);
            /*Clear color value for all write enable color buffer's of the frame buffer*/
            void SetClearDepth(const float clear);
            /*Clear depth value for the depth buffer of the frame buffer */
            void SetClearBuffers(bitField clear);
            /*Set Buffers types that will be cleared based on flags*/
            
            void EnableDepthBuffer(void) ;
            /*Enable Depth buffer for this frame buffer */
            Color GetClearColor(void) const;
            float GetClearDepth(void) const;

        private:
            ui32                m_FrameBufferId     ;
            bool                m_DepthBuffer       ;
            ui32*               m_ColorBufferIds    ;
            ui32                m_ColorBufferCount  ;
            Color               m_ClearColor        ;
            float               m_ClearDepth        ;
            ClearBuffersType    m_flags             ;
    };

}