#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/DebugUtilsFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugUtilsFeature)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::XR::OpenXR::Features {
class DebugUtilsFeature_DebugCallbackDelegate;
}
namespace UnityEngine::XR::OpenXR::Features {
struct DebugUtilsFeature_MessageSeverity;
}
namespace UnityEngine::XR::OpenXR::Features {
struct DebugUtilsFeature_MessageType;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features {
struct DebugUtilsFeature_MessageSeverity;
}
namespace UnityEngine::XR::OpenXR::Features {
struct DebugUtilsFeature_MessageType;
}
namespace UnityEngine::XR::OpenXR::Features {
class DebugUtilsFeature;
}
namespace UnityEngine::XR::OpenXR::Features {
class DebugUtilsFeature_DebugCallbackDelegate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity);
MARK_VAL_T(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType);
MARK_REF_T(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*);
MARK_REF_T(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity, "UnityEngine.XR.OpenXR.Features", "DebugUtilsFeature/MessageSeverity");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType, "UnityEngine.XR.OpenXR.Features", "DebugUtilsFeature/MessageType");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*, "UnityEngine.XR.OpenXR.Features", "DebugUtilsFeature");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate*, "UnityEngine.XR.OpenXR.Features", "DebugUtilsFeature/DebugCallbackDelegate");
// [Flags]
// Dependencies
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.Features.DebugUtilsFeature/MessageSeverity
struct CORDL_TYPE DebugUtilsFeature_MessageSeverity {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DebugUtilsFeature_MessageSeverity_Unwrapped
  enum struct __DebugUtilsFeature_MessageSeverity_Unwrapped : int32_t {
    __E_Verbose = static_cast<int32_t>(0x1),
    __E_Info = static_cast<int32_t>(0x10),
    __E_Warning = static_cast<int32_t>(0x100),
    __E_Error = static_cast<int32_t>(0x1000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebugUtilsFeature_MessageSeverity_Unwrapped() const noexcept {
    return static_cast<__DebugUtilsFeature_MessageSeverity_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUtilsFeature_MessageSeverity();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr DebugUtilsFeature_MessageSeverity(int32_t value__) noexcept;

  /// @brief Field Error value: I32(4096)
  static ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity const Error;

  /// @brief Field Info value: I32(16)
  static ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity const Info;

  /// @brief Field Verbose value: I32(1)
  static ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity const Verbose;

  /// @brief Field Warning value: I32(256)
  static ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity const Warning;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17604 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity) == 0x4, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features
// [Flags]
// Dependencies
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.Features.DebugUtilsFeature/MessageType
struct CORDL_TYPE DebugUtilsFeature_MessageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DebugUtilsFeature_MessageType_Unwrapped
  enum struct __DebugUtilsFeature_MessageType_Unwrapped : int32_t {
    __E_General = static_cast<int32_t>(0x1),
    __E_Validation = static_cast<int32_t>(0x2),
    __E_Performance = static_cast<int32_t>(0x4),
    __E_Conformance = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebugUtilsFeature_MessageType_Unwrapped() const noexcept {
    return static_cast<__DebugUtilsFeature_MessageType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUtilsFeature_MessageType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr DebugUtilsFeature_MessageType(int32_t value__) noexcept;

  /// @brief Field Conformance value: I32(8)
  static ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType const Conformance;

  /// @brief Field General value: I32(1)
  static ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType const General;

  /// @brief Field Performance value: I32(4)
  static ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType const Performance;

  /// @brief Field Validation value: I32(2)
  static ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType const Validation;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17605 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType) == 0x4, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.DebugUtilsFeature/DebugCallbackDelegate
class CORDL_TYPE DebugUtilsFeature_DebugCallbackDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6e4a740, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW message, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6e4a760, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6e4a72c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW message);

  static inline ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6e4a55c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUtilsFeature_DebugCallbackDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUtilsFeature_DebugCallbackDelegate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUtilsFeature_DebugCallbackDelegate(DebugUtilsFeature_DebugCallbackDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUtilsFeature_DebugCallbackDelegate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUtilsFeature_DebugCallbackDelegate(DebugUtilsFeature_DebugCallbackDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17606 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate) == 0x80, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features
// Dependencies UnityEngine.XR.OpenXR.Features.DebugUtilsFeature::MessageSeverity, UnityEngine.XR.OpenXR.Features.DebugUtilsFeature::MessageType, UnityEngine.XR.OpenXR.Features.OpenXRFeature
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.DebugUtilsFeature
class CORDL_TYPE DebugUtilsFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
  // Declarations
  using DebugCallbackDelegate = ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate;

  using MessageSeverity = ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity;

  using MessageType = ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType;

  /// @brief Field callback, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate* callback;

  /// @brief Field m_MessageSeverity, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MessageSeverity,
                      put = __cordl_internal_set_m_MessageSeverity)) ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity m_MessageSeverity;

  /// @brief Field m_MessageType, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MessageType, put = __cordl_internal_set_m_MessageType)) ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType m_MessageType;

  __declspec(property(get = get_messageSeverity, put = set_messageSeverity)) ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity messageSeverity;

  __declspec(property(get = get_messageType, put = set_messageType)) ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType messageType;

  /// [MonoPInvokeCallback(typeof(UnityEngine.XR.OpenXR.Features.DebugUtilsFeature::DebugCallbackDelegate))]
  /// @brief Method DebugCallback, addr 0x6e4a400, size 0x8c, virtual false, abstract: false, final false
  static inline void DebugCallback(::StringW msg);

  /// @brief Method DebugUtilsSetCallback, addr 0x6e4a5f4, size 0x80, virtual false, abstract: false, final false
  static inline void DebugUtilsSetCallback(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate* callback);

  /// @brief Method DebugUtilsSetConfig, addr 0x6e4a674, size 0x8c, virtual false, abstract: false, final false
  static inline bool DebugUtilsSetConfig(uint64_t messageSeverity, uint64_t messageType);

  /// @brief Method HookGetInstanceProcAddr, addr 0x6e4a4c4, size 0x98, virtual true, abstract: false, final false
  inline ::System::IntPtr HookGetInstanceProcAddr(::System::IntPtr hookGetInstanceProcAddr);

  static inline ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature* New_ctor();

  /// @brief Method OnInstanceCreate, addr 0x6e4a700, size 0x8, virtual true, abstract: false, final false
  inline bool OnInstanceCreate(uint64_t xrInstance);

  /// @brief Method OnInstanceDestroy, addr 0x6e4a708, size 0x10, virtual true, abstract: false, final false
  inline void OnInstanceDestroy(uint64_t xrInstance);

  /// @brief Method SetCallback, addr 0x6e4a5d8, size 0x10, virtual false, abstract: false, final false
  inline void SetCallback(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate* callbackDelegate);

  /// @brief Method SetConfig, addr 0x6e4a5e8, size 0xc, virtual false, abstract: false, final false
  inline bool SetConfig(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity messageSeverity, ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType messageType);

  constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate* const& __cordl_internal_get_callback() const;

  constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate*& __cordl_internal_get_callback();

  constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity const& __cordl_internal_get_m_MessageSeverity() const;

  constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity& __cordl_internal_get_m_MessageSeverity();

  constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType const& __cordl_internal_get_m_MessageType() const;

  constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType& __cordl_internal_get_m_MessageType();

  constexpr void __cordl_internal_set_callback(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate* value);

  constexpr void __cordl_internal_set_m_MessageSeverity(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity value);

  constexpr void __cordl_internal_set_m_MessageType(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType value);

  /// @brief Method .ctor, addr 0x6e4a718, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_messageSeverity, addr 0x6e4a48c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity get_messageSeverity();

  /// @brief Method get_messageType, addr 0x6e4a4a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType get_messageType();

  /// @brief Method set_messageSeverity, addr 0x6e4a494, size 0x14, virtual false, abstract: false, final false
  inline void set_messageSeverity(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity value);

  /// @brief Method set_messageType, addr 0x6e4a4b0, size 0x14, virtual false, abstract: false, final false
  inline void set_messageType(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUtilsFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUtilsFeature", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUtilsFeature(DebugUtilsFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUtilsFeature", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUtilsFeature(DebugUtilsFeature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17607 };

  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.debugutils" };

  /// @brief Field k_AllMessageSeverities value: I32(4369)
  static ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity const k_AllMessageSeverities;

  /// @brief Field k_AllMessageTypes value: I32(15)
  static ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType const k_AllMessageTypes;

  /// @brief Field k_DebugLogPrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString k_DebugLogPrefix{ u"[Debug Utils] " };

  /// @brief Field callback, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate* ___callback;

  /// [SerializeField]
  /// @brief Field m_MessageSeverity, offset: 0x78, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity ___m_MessageSeverity;

  /// [SerializeField]
  /// @brief Field m_MessageType, offset: 0x7c, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType ___m_MessageType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature, ___callback) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature, ___m_MessageSeverity) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature, ___m_MessageType) == 0x7c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature) == 0x80, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features
