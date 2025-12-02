#ifdef __cpp_modules
module;
#endif

#pragma once
#include "UnityEngine/Rendering/Universal/Internal/AdditionalLightsShadowCasterPass.hpp"
#include "UnityEngine/Rendering/Universal/Internal/ColorGradingLutPass.hpp"
#include "UnityEngine/Rendering/Universal/Internal/CopyColorPass.hpp"
#include "UnityEngine/Rendering/Universal/Internal/CopyDepthPass.hpp"
#include "UnityEngine/Rendering/Universal/Internal/DeferredConfig.hpp"
#include "UnityEngine/Rendering/Universal/Internal/DeferredLights.hpp"
#include "UnityEngine/Rendering/Universal/Internal/DeferredPass.hpp"
#include "UnityEngine/Rendering/Universal/Internal/DepthNormalOnlyPass.hpp"
#include "UnityEngine/Rendering/Universal/Internal/DepthOnlyPass.hpp"
#include "UnityEngine/Rendering/Universal/Internal/DrawObjectsPass.hpp"
#include "UnityEngine/Rendering/Universal/Internal/DrawObjectsWithRenderingLayersPass.hpp"
#include "UnityEngine/Rendering/Universal/Internal/FinalBlitPass.hpp"
#include "UnityEngine/Rendering/Universal/Internal/ForwardLights.hpp"
#include "UnityEngine/Rendering/Universal/Internal/GBufferPass.hpp"
#include "UnityEngine/Rendering/Universal/Internal/LightFlag.hpp"
#include "UnityEngine/Rendering/Universal/Internal/MainLightShadowCasterPass.hpp"
#include "UnityEngine/Rendering/Universal/Internal/NormalReconstruction.hpp"
#include "UnityEngine/Rendering/Universal/Internal/RenderTargetBufferSystem.hpp"
#include "UnityEngine/Rendering/Universal/Internal/StencilUsage.hpp"
#ifdef __cpp_modules
export module Internal;
#endif
