#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRInputSubsystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystem_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XRInputSubsystem)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::XR {
struct TrackingOriginModeFlags;
}
namespace UnityEngine::XR {
class XRInputSubsystem_BindingsMarshaller;
}
// Forward declare root types
namespace UnityEngine::XR {
class XRInputSubsystem;
}
namespace UnityEngine::XR {
class XRInputSubsystem_BindingsMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::XRInputSubsystem);
MARK_REF_PTR_T(::UnityEngine::XR::XRInputSubsystem_BindingsMarshaller);
// Dependencies System.Object
namespace UnityEngine::XR {
// Is value type: false
// CS Name: UnityEngine.XR.XRInputSubsystem/BindingsMarshaller
class CORDL_TYPE XRInputSubsystem_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x6c6acf0, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::XR::XRInputSubsystem* xrInputSubsystem);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRInputSubsystem_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRInputSubsystem_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRInputSubsystem_BindingsMarshaller(XRInputSubsystem_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRInputSubsystem_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRInputSubsystem_BindingsMarshaller(XRInputSubsystem_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21959 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::XRInputSubsystem_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR
// Dependencies UnityEngine.IntegratedSubsystem`1<TSubsystemDescriptor>
namespace UnityEngine::XR {
// Is value type: false
// CS Name: UnityEngine.XR.XRInputSubsystem
class CORDL_TYPE XRInputSubsystem : public ::UnityEngine::IntegratedSubsystem_1<Il2CppObject*> {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::XR::XRInputSubsystem_BindingsMarshaller;

  /// @brief Field boundaryChanged, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_boundaryChanged, put = __cordl_internal_set_boundaryChanged)) ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* boundaryChanged;

  /// @brief Field m_DeviceIdsCache, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DeviceIdsCache, put = __cordl_internal_set_m_DeviceIdsCache)) ::System::Collections::Generic::List_1<uint64_t>* m_DeviceIdsCache;

  /// @brief Field trackingOriginUpdated, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_trackingOriginUpdated,
                      put = __cordl_internal_set_trackingOriginUpdated)) ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* trackingOriginUpdated;

  /// @brief Method InvokeBoundaryChangedEvent, addr 0x6c6abe8, size 0xcc, virtual false, abstract: false, final false
  static inline void InvokeBoundaryChangedEvent(::System::IntPtr internalPtr);

  /// @brief Method InvokeTrackingOriginUpdatedEvent, addr 0x6c6ab1c, size 0xcc, virtual false, abstract: false, final false
  static inline void InvokeTrackingOriginUpdatedEvent(::System::IntPtr internalPtr);

  static inline ::UnityEngine::XR::XRInputSubsystem* New_ctor();

  /// @brief Method TryRecenter, addr 0x6c6a6f4, size 0x50, virtual false, abstract: false, final false
  inline bool TryRecenter();

  /// @brief Method TryRecenter_Injected, addr 0x6c6a744, size 0x3c, virtual false, abstract: false, final false
  static inline bool TryRecenter_Injected(::System::IntPtr _unity_self);

  /// @brief Method TrySetTrackingOriginMode, addr 0x6c6a780, size 0x58, virtual false, abstract: false, final false
  inline bool TrySetTrackingOriginMode(::UnityEngine::XR::TrackingOriginModeFlags origin);

  /// @brief Method TrySetTrackingOriginMode_Injected, addr 0x6c6a7d8, size 0x44, virtual false, abstract: false, final false
  static inline bool TrySetTrackingOriginMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::XR::TrackingOriginModeFlags origin);

  constexpr ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* const& __cordl_internal_get_boundaryChanged() const;

  constexpr ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*& __cordl_internal_get_boundaryChanged();

  constexpr ::System::Collections::Generic::List_1<uint64_t>* const& __cordl_internal_get_m_DeviceIdsCache() const;

  constexpr ::System::Collections::Generic::List_1<uint64_t>*& __cordl_internal_get_m_DeviceIdsCache();

  constexpr ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* const& __cordl_internal_get_trackingOriginUpdated() const;

  constexpr ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*& __cordl_internal_get_trackingOriginUpdated();

  constexpr void __cordl_internal_set_boundaryChanged(::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* value);

  constexpr void __cordl_internal_set_m_DeviceIdsCache(::System::Collections::Generic::List_1<uint64_t>* value);

  constexpr void __cordl_internal_set_trackingOriginUpdated(::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* value);

  /// @brief Method .ctor, addr 0x6c6acb4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_boundaryChanged, addr 0x6c6a99c, size 0xc0, virtual false, abstract: false, final false
  inline void add_boundaryChanged(::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* value);

  /// @brief Method add_trackingOriginUpdated, addr 0x6c6a81c, size 0xc0, virtual false, abstract: false, final false
  inline void add_trackingOriginUpdated(::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* value);

  /// @brief Method remove_boundaryChanged, addr 0x6c6aa5c, size 0xc0, virtual false, abstract: false, final false
  inline void remove_boundaryChanged(::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* value);

  /// @brief Method remove_trackingOriginUpdated, addr 0x6c6a8dc, size 0xc0, virtual false, abstract: false, final false
  inline void remove_trackingOriginUpdated(::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRInputSubsystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRInputSubsystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRInputSubsystem(XRInputSubsystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRInputSubsystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRInputSubsystem(XRInputSubsystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21960 };

  /// @brief Field trackingOriginUpdated, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* ___trackingOriginUpdated;

  /// @brief Field boundaryChanged, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* ___boundaryChanged;

  /// @brief Field m_DeviceIdsCache, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint64_t>* ___m_DeviceIdsCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::XRInputSubsystem, ___trackingOriginUpdated) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRInputSubsystem, ___boundaryChanged) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRInputSubsystem, ___m_DeviceIdsCache) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::XRInputSubsystem, 0x38>, "Size mismatch!");

} // namespace UnityEngine::XR
NEED_NO_BOX(::UnityEngine::XR::XRInputSubsystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRInputSubsystem*, "UnityEngine.XR", "XRInputSubsystem");
NEED_NO_BOX(::UnityEngine::XR::XRInputSubsystem_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRInputSubsystem_BindingsMarshaller*, "UnityEngine.XR", "XRInputSubsystem/BindingsMarshaller");
