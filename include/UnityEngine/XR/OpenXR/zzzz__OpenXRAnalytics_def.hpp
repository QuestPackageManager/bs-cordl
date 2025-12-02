#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRAnalytics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRAnalytics)
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRFeature;
}
namespace UnityEngine::XR::OpenXR {
struct OpenXRAnalytics_InitializeEvent;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRAnalytics___c;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class OpenXRAnalytics;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRAnalytics___c;
}
namespace UnityEngine::XR::OpenXR {
struct OpenXRAnalytics_InitializeEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::OpenXRAnalytics);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::OpenXRAnalytics___c);
MARK_VAL_T(::UnityEngine::XR::OpenXR::OpenXRAnalytics_InitializeEvent);
// Dependencies
namespace UnityEngine::XR::OpenXR {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.OpenXRAnalytics/InitializeEvent
struct CORDL_TYPE OpenXRAnalytics_InitializeEvent {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRAnalytics_InitializeEvent();

  // Ctor Parameters [CppParam { name: "success", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "runtime", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "runtime_version", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "plugin_version", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "api_version", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "available_extensions", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name:
  // "enabled_extensions", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "enabled_features", ty: "::ArrayW<::StringW,::Array<::StringW>*>",
  // modifiers: "", def_value: None }, CppParam { name: "failed_features", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }]
  constexpr OpenXRAnalytics_InitializeEvent(bool success, ::StringW runtime, ::StringW runtime_version, ::StringW plugin_version, ::StringW api_version,
                                            ::ArrayW<::StringW, ::Array<::StringW>*> available_extensions, ::ArrayW<::StringW, ::Array<::StringW>*> enabled_extensions,
                                            ::ArrayW<::StringW, ::Array<::StringW>*> enabled_features, ::ArrayW<::StringW, ::Array<::StringW>*> failed_features) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18449 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field success, offset: 0x0, size: 0x1, def value: None
  bool success;

  /// @brief Field runtime, offset: 0x8, size: 0x8, def value: None
  ::StringW runtime;

  /// @brief Field runtime_version, offset: 0x10, size: 0x8, def value: None
  ::StringW runtime_version;

  /// @brief Field plugin_version, offset: 0x18, size: 0x8, def value: None
  ::StringW plugin_version;

  /// @brief Field api_version, offset: 0x20, size: 0x8, def value: None
  ::StringW api_version;

  /// @brief Field available_extensions, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> available_extensions;

  /// @brief Field enabled_extensions, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> enabled_extensions;

  /// @brief Field enabled_features, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> enabled_features;

  /// @brief Field failed_features, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> failed_features;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRAnalytics_InitializeEvent, success) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRAnalytics_InitializeEvent, runtime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRAnalytics_InitializeEvent, runtime_version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRAnalytics_InitializeEvent, plugin_version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRAnalytics_InitializeEvent, api_version) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRAnalytics_InitializeEvent, available_extensions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRAnalytics_InitializeEvent, enabled_extensions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRAnalytics_InitializeEvent, enabled_features) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRAnalytics_InitializeEvent, failed_features) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRAnalytics_InitializeEvent, 0x48>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRAnalytics/<>c
class CORDL_TYPE OpenXRAnalytics___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c* __9;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0)) ::System::Func_2<::StringW, ::StringW>* __9__7_0;

  /// @brief Field <>9__7_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_1, put = setStaticF___9__7_1)) ::System::Func_2<::StringW, ::StringW>* __9__7_1;

  /// @brief Field <>9__7_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_2, put = setStaticF___9__7_2)) ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, bool>* __9__7_2;

  /// @brief Field <>9__7_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_3, put = setStaticF___9__7_3)) ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::StringW>* __9__7_3;

  /// @brief Field <>9__7_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_4, put = setStaticF___9__7_4)) ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, bool>* __9__7_4;

  /// @brief Field <>9__7_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_5, put = setStaticF___9__7_5)) ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::StringW>* __9__7_5;

  static inline ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c* New_ctor();

  /// @brief Method <CreateInitializeEvent>b__7_0, addr 0x67b6218, size 0xa4, virtual false, abstract: false, final false
  inline ::StringW _CreateInitializeEvent_b__7_0(::StringW ext);

  /// @brief Method <CreateInitializeEvent>b__7_1, addr 0x67b62c0, size 0xa4, virtual false, abstract: false, final false
  inline ::StringW _CreateInitializeEvent_b__7_1(::StringW ext);

  /// @brief Method <CreateInitializeEvent>b__7_2, addr 0x67b6364, size 0x84, virtual false, abstract: false, final false
  inline bool _CreateInitializeEvent_b__7_2(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f);

  /// @brief Method <CreateInitializeEvent>b__7_3, addr 0x67b63e8, size 0x78, virtual false, abstract: false, final false
  inline ::StringW _CreateInitializeEvent_b__7_3(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f);

  /// @brief Method <CreateInitializeEvent>b__7_4, addr 0x67b6460, size 0x84, virtual false, abstract: false, final false
  inline bool _CreateInitializeEvent_b__7_4(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f);

  /// @brief Method <CreateInitializeEvent>b__7_5, addr 0x67b64e4, size 0x78, virtual false, abstract: false, final false
  inline ::StringW _CreateInitializeEvent_b__7_5(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f);

  /// @brief Method .ctor, addr 0x67b6214, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c* getStaticF___9();

  static inline ::System::Func_2<::StringW, ::StringW>* getStaticF___9__7_0();

  static inline ::System::Func_2<::StringW, ::StringW>* getStaticF___9__7_1();

  static inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, bool>* getStaticF___9__7_2();

  static inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::StringW>* getStaticF___9__7_3();

  static inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, bool>* getStaticF___9__7_4();

  static inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::StringW>* getStaticF___9__7_5();

  static inline void setStaticF___9(::UnityEngine::XR::OpenXR::OpenXRAnalytics___c* value);

  static inline void setStaticF___9__7_0(::System::Func_2<::StringW, ::StringW>* value);

  static inline void setStaticF___9__7_1(::System::Func_2<::StringW, ::StringW>* value);

  static inline void setStaticF___9__7_2(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, bool>* value);

  static inline void setStaticF___9__7_3(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::StringW>* value);

  static inline void setStaticF___9__7_4(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, bool>* value);

  static inline void setStaticF___9__7_5(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRAnalytics___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRAnalytics___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRAnalytics___c(OpenXRAnalytics___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRAnalytics___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRAnalytics___c(OpenXRAnalytics___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18450 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRAnalytics
class CORDL_TYPE OpenXRAnalytics : public ::System::Object {
public:
  // Declarations
  using InitializeEvent = ::UnityEngine::XR::OpenXR::OpenXRAnalytics_InitializeEvent;

  using __c = ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c;

  /// @brief Method CreateInitializeEvent, addr 0x67b5794, size 0x544, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::OpenXRAnalytics_InitializeEvent CreateInitializeEvent(bool success);

  /// @brief Method Initialize, addr 0x67b5788, size 0x8, virtual false, abstract: false, final false
  static inline bool Initialize();

  /// @brief Method SendInitializeEvent, addr 0x67b5790, size 0x4, virtual false, abstract: false, final false
  static inline void SendInitializeEvent(bool success);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRAnalytics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRAnalytics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRAnalytics(OpenXRAnalytics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRAnalytics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRAnalytics(OpenXRAnalytics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18451 };

  /// @brief Field kEventInitialize offset 0xffffffff size 0x8
  static constexpr ::ConstString kEventInitialize{ u"openxr_initialize" };

  /// @brief Field kMaxEventsPerHour offset 0xffffffff size 0x4
  static constexpr int32_t kMaxEventsPerHour{ static_cast<int32_t>(0x3e8) };

  /// @brief Field kMaxNumberOfElements offset 0xffffffff size 0x4
  static constexpr int32_t kMaxNumberOfElements{ static_cast<int32_t>(0x3e8) };

  /// @brief Field kVendorKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kVendorKey{ u"unity.openxr" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRAnalytics, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
NEED_NO_BOX(::UnityEngine::XR::OpenXR::OpenXRAnalytics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRAnalytics*, "UnityEngine.XR.OpenXR", "OpenXRAnalytics");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::OpenXRAnalytics___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*, "UnityEngine.XR.OpenXR", "OpenXRAnalytics/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRAnalytics_InitializeEvent, "UnityEngine.XR.OpenXR", "OpenXRAnalytics/InitializeEvent");
