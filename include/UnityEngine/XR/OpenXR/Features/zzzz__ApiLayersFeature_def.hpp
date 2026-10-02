#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/ApiLayersFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__Architecture_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ApiLayersFeature)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::XR::OpenXR::Features {
class ApiLayersFeature___c;
}
namespace UnityEngine::XR::OpenXR::Features {
class ApiLayersFeature___c__DisplayClass10_0;
}
namespace UnityEngine::XR::OpenXR {
struct ApiLayers_ApiLayer;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers_ISupport;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features {
class ApiLayersFeature;
}
namespace UnityEngine::XR::OpenXR::Features {
class ApiLayersFeature___c;
}
namespace UnityEngine::XR::OpenXR::Features {
class ApiLayersFeature___c__DisplayClass10_0;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::OpenXR::Features::ApiLayersFeature*);
MARK_REF_T(::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c*);
MARK_REF_T(::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c__DisplayClass10_0*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::ApiLayersFeature*, "UnityEngine.XR.OpenXR.Features", "ApiLayersFeature");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c*, "UnityEngine.XR.OpenXR.Features", "ApiLayersFeature/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c__DisplayClass10_0*, "UnityEngine.XR.OpenXR.Features", "ApiLayersFeature/<>c__DisplayClass10_0");
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.ApiLayersFeature/<>c
class CORDL_TYPE ApiLayersFeature___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c* __9;

  /// @brief Field <>9__10_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_1, put = setStaticF___9__10_1)) ::System::Func_2<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer, ::StringW>* __9__10_1;

  static inline ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c* New_ctor();

  /// @brief Method <GetEnabledApiLayers>b__10_1, addr 0x6e49b44, size 0x8, virtual false, abstract: false, final false
  inline ::StringW _GetEnabledApiLayers_b__10_1(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer layer);

  /// @brief Method .ctor, addr 0x6e49b40, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer, ::StringW>* getStaticF___9__10_1();

  static inline void setStaticF___9(::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c* value);

  static inline void setStaticF___9__10_1(::System::Func_2<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApiLayersFeature___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ApiLayersFeature___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApiLayersFeature___c(ApiLayersFeature___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApiLayersFeature___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApiLayersFeature___c(ApiLayersFeature___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17600 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features
// [CompilerGenerated]
// Dependencies System.Object, System.Runtime.InteropServices.Architecture
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.ApiLayersFeature/<>c__DisplayClass10_0
class CORDL_TYPE ApiLayersFeature___c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field targetArchitecture, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_targetArchitecture, put = __cordl_internal_set_targetArchitecture)) ::System::Runtime::InteropServices::Architecture targetArchitecture;

  static inline ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c__DisplayClass10_0* New_ctor();

  /// @brief Method <GetEnabledApiLayers>b__0, addr 0x6e49b4c, size 0x34, virtual false, abstract: false, final false
  inline bool _GetEnabledApiLayers_b__0(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer layer);

  constexpr ::System::Runtime::InteropServices::Architecture const& __cordl_internal_get_targetArchitecture() const;

  constexpr ::System::Runtime::InteropServices::Architecture& __cordl_internal_get_targetArchitecture();

  constexpr void __cordl_internal_set_targetArchitecture(::System::Runtime::InteropServices::Architecture value);

  /// @brief Method .ctor, addr 0x6e499ec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApiLayersFeature___c__DisplayClass10_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ApiLayersFeature___c__DisplayClass10_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApiLayersFeature___c__DisplayClass10_0(ApiLayersFeature___c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApiLayersFeature___c__DisplayClass10_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApiLayersFeature___c__DisplayClass10_0(ApiLayersFeature___c__DisplayClass10_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17601 };

  /// @brief Field targetArchitecture, offset: 0x10, size: 0x4, def value: None
  ::System::Runtime::InteropServices::Architecture ___targetArchitecture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c__DisplayClass10_0, ___targetArchitecture) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c__DisplayClass10_0) == 0x18, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRFeature
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.ApiLayersFeature
class CORDL_TYPE ApiLayersFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
  // Declarations
  using __c = ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c;

  using __c__DisplayClass10_0 = ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c__DisplayClass10_0;

  __declspec(property(get = get_apiLayers)) ::UnityEngine::XR::OpenXR::ApiLayers* apiLayers;

  /// @brief Field m_ApiLayers, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ApiLayers, put = __cordl_internal_set_m_ApiLayers)) ::UnityEngine::XR::OpenXR::ApiLayers* m_ApiLayers;

  /// @brief Field s_ApiLayersSupport, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ApiLayersSupport,
                      put = setStaticF_s_ApiLayersSupport)) ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::ApiLayers_ISupport*>* s_ApiLayersSupport;

  /// @brief Method AddSupport, addr 0x6e490e4, size 0x11c, virtual false, abstract: false, final false
  static inline void AddSupport(::UnityEngine::XR::OpenXR::ApiLayers_ISupport* support);

  /// @brief Method GetEnabledApiLayers, addr 0x6e49478, size 0x284, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetEnabledApiLayers();

  /// @brief Method HookGetInstanceProcAddr, addr 0x6e49288, size 0x1f0, virtual true, abstract: false, final false
  inline ::System::IntPtr HookGetInstanceProcAddr(::System::IntPtr hookGetInstanceProcAddr);

  static inline ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature* New_ctor();

  /// @brief Method OnInstanceCreate, addr 0x6e49828, size 0x8, virtual true, abstract: false, final false
  inline bool OnInstanceCreate(uint64_t xrInstance);

  /// @brief Method OnInstanceDestroy, addr 0x6e49838, size 0x1b0, virtual true, abstract: false, final false
  inline void OnInstanceDestroy(uint64_t xrInstance);

  /// @brief Method RemoveSupport, addr 0x6e49200, size 0x88, virtual false, abstract: false, final false
  static inline void RemoveSupport(::UnityEngine::XR::OpenXR::ApiLayers_ISupport* support);

  /// @brief Method SetEnabledApiLayers, addr 0x6e496fc, size 0x124, virtual false, abstract: false, final false
  static inline void SetEnabledApiLayers(::ArrayW<::StringW> apiLayerNames, int32_t arraySize);

  constexpr ::UnityEngine::XR::OpenXR::ApiLayers* const& __cordl_internal_get_m_ApiLayers() const;

  constexpr ::UnityEngine::XR::OpenXR::ApiLayers*& __cordl_internal_get_m_ApiLayers();

  constexpr void __cordl_internal_set_m_ApiLayers(::UnityEngine::XR::OpenXR::ApiLayers* value);

  /// @brief Method .ctor, addr 0x6e499f0, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::ApiLayers_ISupport*>* getStaticF_s_ApiLayersSupport();

  /// @brief Method get_apiLayers, addr 0x6e490dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::ApiLayers* get_apiLayers();

  static inline void setStaticF_s_ApiLayersSupport(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::ApiLayers_ISupport*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApiLayersFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ApiLayersFeature", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApiLayersFeature(ApiLayersFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApiLayersFeature", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApiLayersFeature(ApiLayersFeature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17602 };

  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.apilayers" };

  /// [SerializeField]
  /// @brief Field m_ApiLayers, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::ApiLayers* ___m_ApiLayers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::ApiLayersFeature, ___m_ApiLayers) == 0x70, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::ApiLayersFeature) == 0x78, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features
