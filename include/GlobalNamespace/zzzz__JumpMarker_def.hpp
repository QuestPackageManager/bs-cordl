#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__Marker_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
CORDL_MODULE_EXPORT(JumpMarker)
namespace GlobalNamespace {
class JumpDestinationMarker;
}
namespace UnityEngine::Playables {
class INotification;
}
namespace UnityEngine {
struct PropertyName;
}
// Forward declare root types
namespace GlobalNamespace {
class JumpMarker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::JumpMarker);
// Type: ::JumpMarker
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::JumpMarker*
class CORDL_TYPE JumpMarker : public ::UnityEngine::Timeline::Marker {
public:
  // Declarations
  /// @brief Field _destination, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__destination, put = __cordl_internal_set__destination))::UnityW<::GlobalNamespace::JumpDestinationMarker> _destination;

  /// @brief Field <id>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__id_k__BackingField, put = __cordl_internal_set__id_k__BackingField))::UnityEngine::PropertyName _id_k__BackingField;

  __declspec(property(get = get_id))::UnityEngine::PropertyName id;

  __declspec(property(get = get_jumpDestination))::UnityW<::GlobalNamespace::JumpDestinationMarker> jumpDestination;

  /// @brief Convert operator to "::UnityEngine::Playables::INotification"
  constexpr operator ::UnityEngine::Playables::INotification*() noexcept;

  static inline ::GlobalNamespace::JumpMarker* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::JumpDestinationMarker> const& __cordl_internal_get__destination() const;

  constexpr ::UnityW<::GlobalNamespace::JumpDestinationMarker>& __cordl_internal_get__destination();

  constexpr ::UnityEngine::PropertyName const& __cordl_internal_get__id_k__BackingField() const;

  constexpr ::UnityEngine::PropertyName& __cordl_internal_get__id_k__BackingField();

  constexpr void __cordl_internal_set__destination(::UnityW<::GlobalNamespace::JumpDestinationMarker> value);

  constexpr void __cordl_internal_set__id_k__BackingField(::UnityEngine::PropertyName value);

  /// @brief Method .ctor, addr 0x22b8b78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_id, addr 0x22b8b68, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::PropertyName get_id();

  /// @brief Method get_jumpDestination, addr 0x22b8b70, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::JumpDestinationMarker> get_jumpDestination();

  /// @brief Convert to "::UnityEngine::Playables::INotification"
  constexpr ::UnityEngine::Playables::INotification* i___UnityEngine__Playables__INotification() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JumpMarker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JumpMarker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JumpMarker(JumpMarker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JumpMarker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JumpMarker(JumpMarker const&) = delete;

  /// @brief Field _destination, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::JumpDestinationMarker> ____destination;

  /// @brief Field <id>k__BackingField, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::PropertyName ____id_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::JumpMarker, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::JumpMarker, ____destination) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JumpMarker, ____id_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::JumpMarker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::JumpMarker*, "", "JumpMarker");
