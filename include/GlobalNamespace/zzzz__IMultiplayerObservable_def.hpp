#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IMultiplayerObservable)
// Forward declare root types
namespace GlobalNamespace {
class IMultiplayerObservable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IMultiplayerObservable);
// Type: ::IMultiplayerObservable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5248))
// CS Name: ::IMultiplayerObservable*
class CORDL_TYPE IMultiplayerObservable {
public:
  // Declarations
  __declspec(property(get = get_offsetSyncTime)) float_t offsetSyncTime;

  __declspec(property(get = get_isFailed)) bool isFailed;

  /// @brief Method get_offsetSyncTime addr 0x0 size 0xffffffffffffffff virtual true final false
  inline float_t get_offsetSyncTime();

  /// @brief Method get_isFailed addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_isFailed();

  // Ctor Parameters [CppParam { name: "", ty: "IMultiplayerObservable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMultiplayerObservable(IMultiplayerObservable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMultiplayerObservable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMultiplayerObservable(IMultiplayerObservable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IMultiplayerObservable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMultiplayerObservable*, "", "IMultiplayerObservable");
