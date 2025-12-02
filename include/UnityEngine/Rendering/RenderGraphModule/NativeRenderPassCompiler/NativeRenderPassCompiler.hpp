#ifdef __cpp_modules
module;
#endif

#pragma once
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/CompilerContextData.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/FixedAttachmentArray_1.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/LoadAudit.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/LoadReason.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/Name.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/NativeListExtensions.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/NativePassAttachment.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/NativePassCompiler.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/NativePassData.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/PassBreakAudit.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/PassBreakReason.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/PassData.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/PassFragmentData.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/PassInputData.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/PassMergeState.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/PassOutputData.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/PassRandomWriteData.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/ResourceReaderData.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/ResourceUnversionedData.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/ResourceVersionedData.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/ResourcesData.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/StoreAudit.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/StoreReason.hpp"
#ifdef __cpp_modules
export module NativeRenderPassCompiler;
#endif
