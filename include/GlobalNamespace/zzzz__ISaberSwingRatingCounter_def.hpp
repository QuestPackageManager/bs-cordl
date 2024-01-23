#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(ISaberSwingRatingCounter)
namespace GlobalNamespace {
class ISaberSwingRatingCounterDidChangeReceiver;
}
namespace GlobalNamespace {
class ISaberSwingRatingCounterDidFinishReceiver;
}
// Forward declare root types
namespace GlobalNamespace {
class ISaberSwingRatingCounter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ISaberSwingRatingCounter);
// Type: ::ISaberSwingRatingCounter
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15016))
// CS Name: ::ISaberSwingRatingCounter*
class CORDL_TYPE ISaberSwingRatingCounter {
public:
  // Declarations
  __declspec(property(get = get_beforeCutRating)) float_t beforeCutRating;

  __declspec(property(get = get_afterCutRating)) float_t afterCutRating;

  /// @brief Method get_beforeCutRating, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_beforeCutRating();

  /// @brief Method get_afterCutRating, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_afterCutRating();

  /// @brief Method RegisterDidChangeReceiver, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RegisterDidChangeReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver* receiver);

  /// @brief Method RegisterDidFinishReceiver, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RegisterDidFinishReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver* receiver);

  /// @brief Method UnregisterDidChangeReceiver, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UnregisterDidChangeReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver* receiver);

  /// @brief Method UnregisterDidFinishReceiver, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UnregisterDidFinishReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver* receiver);

  // Ctor Parameters [CppParam { name: "", ty: "ISaberSwingRatingCounter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISaberSwingRatingCounter(ISaberSwingRatingCounter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISaberSwingRatingCounter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISaberSwingRatingCounter(ISaberSwingRatingCounter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ISaberSwingRatingCounter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISaberSwingRatingCounter*, "", "ISaberSwingRatingCounter");
