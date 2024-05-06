#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRInputSubsystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__IntegratedSubsystem_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XRInputSubsystem)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace UnityEngine::XR {
class XRInputSubsystem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::XRInputSubsystem);
// Type: UnityEngine.XR::XRInputSubsystem
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: false
// CS Name: ::UnityEngine.XR::XRInputSubsystem*
class CORDL_TYPE XRInputSubsystem : public ::UnityEngine::IntegratedSubsystem_1<Il2CppObject*> {
public:
  // Declarations
  /// @brief Field boundaryChanged, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_boundaryChanged, put = __cordl_internal_set_boundaryChanged))::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* boundaryChanged;

  /// @brief Field m_DeviceIdsCache, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DeviceIdsCache, put = __cordl_internal_set_m_DeviceIdsCache))::System::Collections::Generic::List_1<uint64_t>* m_DeviceIdsCache;

  /// @brief Field trackingOriginUpdated, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_trackingOriginUpdated,
                      put = __cordl_internal_set_trackingOriginUpdated))::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* trackingOriginUpdated;

  /// @brief Method InvokeBoundaryChangedEvent, addr 0x36081bc, size 0xc4, virtual false, abstract: false, final false
  static inline void InvokeBoundaryChangedEvent(void* internalPtr);

  /// @brief Method InvokeTrackingOriginUpdatedEvent, addr 0x36080f8, size 0xc4, virtual false, abstract: false, final false
  static inline void InvokeTrackingOriginUpdatedEvent(void* internalPtr);

  static inline ::UnityEngine::XR::XRInputSubsystem* New_ctor();

  /// @brief Method TryRecenter, addr 0x3607dfc, size 0x3c, virtual false, abstract: false, final false
  inline bool TryRecenter();

  constexpr ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*& __cordl_internal_get_boundaryChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*> const& __cordl_internal_get_boundaryChanged() const;

  constexpr ::System::Collections::Generic::List_1<uint64_t>*& __cordl_internal_get_m_DeviceIdsCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<uint64_t>*> const& __cordl_internal_get_m_DeviceIdsCache() const;

  constexpr ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*& __cordl_internal_get_trackingOriginUpdated();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*> const& __cordl_internal_get_trackingOriginUpdated() const;

  constexpr void __cordl_internal_set_boundaryChanged(::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* value);

  constexpr void __cordl_internal_set_m_DeviceIdsCache(::System::Collections::Generic::List_1<uint64_t>* value);

  constexpr void __cordl_internal_set_trackingOriginUpdated(::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* value);

  /// @brief Method .ctor, addr 0x3608280, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_boundaryChanged, addr 0x3607f98, size 0xb0, virtual false, abstract: false, final false
  inline void add_boundaryChanged(::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* value);

  /// @brief Method add_trackingOriginUpdated, addr 0x3607e38, size 0xb0, virtual false, abstract: false, final false
  inline void add_trackingOriginUpdated(::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* value);

  /// @brief Method remove_boundaryChanged, addr 0x3608048, size 0xb0, virtual false, abstract: false, final false
  inline void remove_boundaryChanged(::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* value);

  /// @brief Method remove_trackingOriginUpdated, addr 0x3607ee8, size 0xb0, virtual false, abstract: false, final false
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

  /// @brief Field trackingOriginUpdated, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* ___trackingOriginUpdated;

  /// @brief Field boundaryChanged, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* ___boundaryChanged;

  /// @brief Field m_DeviceIdsCache, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint64_t>* ___m_DeviceIdsCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::XRInputSubsystem, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRInputSubsystem, ___trackingOriginUpdated) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRInputSubsystem, ___boundaryChanged) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRInputSubsystem, ___m_DeviceIdsCache) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::XR
NEED_NO_BOX(::UnityEngine::XR::XRInputSubsystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRInputSubsystem*, "UnityEngine.XR", "XRInputSubsystem");
