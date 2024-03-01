#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HashUtility)
// Forward declare root types
namespace UnityEngine::Timeline {
class HashUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::HashUtility);
// Type: UnityEngine.Timeline::HashUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::HashUtility*
class CORDL_TYPE HashUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method CombineHash, addr 0x2d5782c, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t CombineHash(int32_t h1, int32_t h2);

  /// @brief Method CombineHash, addr 0x2d57848, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t CombineHash(int32_t h1, int32_t h2, int32_t h3);

  /// @brief Method CombineHash, addr 0x2d57874, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t CombineHash(int32_t h1, int32_t h2, int32_t h3, int32_t h4);

  /// @brief Method CombineHash, addr 0x2d578b0, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t CombineHash(int32_t h1, int32_t h2, int32_t h3, int32_t h4, int32_t h5);

  /// @brief Method CombineHash, addr 0x2d578fc, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t CombineHash(int32_t h1, int32_t h2, int32_t h3, int32_t h4, int32_t h5, int32_t h6);

  /// @brief Method CombineHash, addr 0x2d57958, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t CombineHash(int32_t h1, int32_t h2, int32_t h3, int32_t h4, int32_t h5, int32_t h6, int32_t h7);

  /// @brief Method CombineHash, addr 0x2d57984, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t CombineHash(::ArrayW<int32_t, ::Array<int32_t>*> hashes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HashUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashUtility(HashUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashUtility(HashUtility const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::HashUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::HashUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::HashUtility*, "UnityEngine.Timeline", "HashUtility");
