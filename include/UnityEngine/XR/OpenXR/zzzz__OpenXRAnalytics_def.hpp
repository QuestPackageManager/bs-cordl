#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRAnalytics)
namespace UnityEngine::XR::OpenXR {
struct __OpenXRAnalytics__InitializeEvent;
}
namespace UnityEngine::XR::OpenXR {
class __OpenXRAnalytics____c;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRFeature;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class OpenXRAnalytics;
}
namespace UnityEngine::XR::OpenXR {
class __OpenXRAnalytics____c;
}
namespace UnityEngine::XR::OpenXR {
struct __OpenXRAnalytics__InitializeEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::OpenXRAnalytics);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c);
MARK_VAL_T(::UnityEngine::XR::OpenXR::__OpenXRAnalytics__InitializeEvent);
// Type: ::InitializeEvent
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14401))
// CS Name: ::OpenXRAnalytics::InitializeEvent
struct CORDL_TYPE __OpenXRAnalytics__InitializeEvent {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "success", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "runtime", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "runtime_version", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "plugin_version", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "api_version", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "available_extensions", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name:
  // "enabled_extensions", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "enabled_features", ty: "::ArrayW<::StringW,::Array<::StringW>*>",
  // modifiers: "", def_value: None }, CppParam { name: "failed_features", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }]
  constexpr __OpenXRAnalytics__InitializeEvent(bool success, ::StringW runtime, ::StringW runtime_version, ::StringW plugin_version, ::StringW api_version,
                                               ::ArrayW<::StringW, ::Array<::StringW>*> available_extensions, ::ArrayW<::StringW, ::Array<::StringW>*> enabled_extensions,
                                               ::ArrayW<::StringW, ::Array<::StringW>*> enabled_features, ::ArrayW<::StringW, ::Array<::StringW>*> failed_features) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OpenXRAnalytics__InitializeEvent();

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::__OpenXRAnalytics__InitializeEvent, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::__OpenXRAnalytics__InitializeEvent, success) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::__OpenXRAnalytics__InitializeEvent, runtime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::__OpenXRAnalytics__InitializeEvent, runtime_version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::__OpenXRAnalytics__InitializeEvent, plugin_version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::__OpenXRAnalytics__InitializeEvent, api_version) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::__OpenXRAnalytics__InitializeEvent, available_extensions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::__OpenXRAnalytics__InitializeEvent, enabled_extensions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::__OpenXRAnalytics__InitializeEvent, enabled_features) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::__OpenXRAnalytics__InitializeEvent, failed_features) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14402))
// CS Name: ::OpenXRAnalytics::<>c*
class CORDL_TYPE __OpenXRAnalytics____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c* __9;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0))::System::Func_2<::StringW, ::StringW>* __9__7_0;

  /// @brief Field <>9__7_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_1, put = setStaticF___9__7_1))::System::Func_2<::StringW, ::StringW>* __9__7_1;

  /// @brief Field <>9__7_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_2, put = setStaticF___9__7_2))::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, bool>* __9__7_2;

  /// @brief Field <>9__7_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_3, put = setStaticF___9__7_3))::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::StringW>* __9__7_3;

  /// @brief Field <>9__7_4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_4, put = setStaticF___9__7_4))::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, bool>* __9__7_4;

  /// @brief Field <>9__7_5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_5, put = setStaticF___9__7_5))::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::StringW>* __9__7_5;

  static inline void setStaticF___9(::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c* value);

  static inline ::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c* getStaticF___9();

  static inline void setStaticF___9__7_0(::System::Func_2<::StringW, ::StringW>* value);

  static inline ::System::Func_2<::StringW, ::StringW>* getStaticF___9__7_0();

  static inline void setStaticF___9__7_1(::System::Func_2<::StringW, ::StringW>* value);

  static inline ::System::Func_2<::StringW, ::StringW>* getStaticF___9__7_1();

  static inline void setStaticF___9__7_2(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, bool>* value);

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, bool>* getStaticF___9__7_2();

  static inline void setStaticF___9__7_3(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::StringW>* value);

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::StringW>* getStaticF___9__7_3();

  static inline void setStaticF___9__7_4(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, bool>* value);

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, bool>* getStaticF___9__7_4();

  static inline void setStaticF___9__7_5(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::StringW>* value);

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::StringW>* getStaticF___9__7_5();

  static inline ::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c* New_ctor();

  /// @brief Method .ctor addr 0x2afba58 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <SendInitializeEvent>b__7_0 addr 0x2afba60 size 0x90 virtual false final false
  inline ::StringW _SendInitializeEvent_b__7_0(::StringW ext);

  /// @brief Method <SendInitializeEvent>b__7_1 addr 0x2afbaf4 size 0x90 virtual false final false
  inline ::StringW _SendInitializeEvent_b__7_1(::StringW ext);

  /// @brief Method <SendInitializeEvent>b__7_2 addr 0x2afbb84 size 0x80 virtual false final false
  inline bool _SendInitializeEvent_b__7_2(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f);

  /// @brief Method <SendInitializeEvent>b__7_3 addr 0x2afbcf0 size 0x74 virtual false final false
  inline ::StringW _SendInitializeEvent_b__7_3(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f);

  /// @brief Method <SendInitializeEvent>b__7_4 addr 0x2afbd64 size 0x80 virtual false final false
  inline bool _SendInitializeEvent_b__7_4(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f);

  /// @brief Method <SendInitializeEvent>b__7_5 addr 0x2afbde4 size 0x74 virtual false final false
  inline ::StringW _SendInitializeEvent_b__7_5(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f);

  // Ctor Parameters [CppParam { name: "", ty: "__OpenXRAnalytics____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OpenXRAnalytics____c(__OpenXRAnalytics____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OpenXRAnalytics____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OpenXRAnalytics____c(__OpenXRAnalytics____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OpenXRAnalytics____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Type: UnityEngine.XR.OpenXR::OpenXRAnalytics
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14403))
// CS Name: ::UnityEngine.XR.OpenXR::OpenXRAnalytics*
class CORDL_TYPE OpenXRAnalytics : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c;

  using InitializeEvent = ::UnityEngine::XR::OpenXR::__OpenXRAnalytics__InitializeEvent;

  /// @brief Field s_Initialized, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_Initialized, put = setStaticF_s_Initialized)) bool s_Initialized;

  static inline void setStaticF_s_Initialized(bool value);

  static inline bool getStaticF_s_Initialized();

  /// @brief Method Initialize addr 0x2afae6c size 0xc8 virtual false final false
  static inline bool Initialize();

  /// @brief Method SendInitializeEvent addr 0x2afaf34 size 0x598 virtual false final false
  static inline void SendInitializeEvent(bool success);

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRAnalytics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRAnalytics(OpenXRAnalytics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRAnalytics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRAnalytics(OpenXRAnalytics const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRAnalytics();

public:
  /// @brief Field kMaxEventsPerHour offset 0xffffffff size 0x4
  static constexpr int32_t kMaxEventsPerHour{ static_cast<int32_t>(0x3e8) };

  /// @brief Field kMaxNumberOfElements offset 0xffffffff size 0x4
  static constexpr int32_t kMaxNumberOfElements{ static_cast<int32_t>(0x3e8) };

  /// @brief Field kVendorKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kVendorKey{ u"unity.openxr" };

  /// @brief Field kEventInitialize offset 0xffffffff size 0x8
  static constexpr ::ConstString kEventInitialize{ u"openxr_initialize" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRAnalytics, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
NEED_NO_BOX(::UnityEngine::XR::OpenXR::OpenXRAnalytics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRAnalytics*, "UnityEngine.XR.OpenXR", "OpenXRAnalytics");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*, "UnityEngine.XR.OpenXR", "OpenXRAnalytics/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::__OpenXRAnalytics__InitializeEvent, "UnityEngine.XR.OpenXR", "OpenXRAnalytics/InitializeEvent");
