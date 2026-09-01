#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\HashUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HashUtility)
// Forward declare root types
namespace UnityEngine::Timeline {
class HashUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::Timeline::HashUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::HashUtility*, "UnityEngine.Timeline", "HashUtility");
// Dependencies System.Object
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.HashUtility
class CORDL_TYPE HashUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method CombineHash, addr 0x69cd7f0, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t CombineHash(int32_t h1, int32_t h2);

  /// @brief Method CombineHash, addr 0x69cd80c, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t CombineHash(int32_t h1, int32_t h2, int32_t h3);

  /// @brief Method CombineHash, addr 0x69cd838, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t CombineHash(int32_t h1, int32_t h2, int32_t h3, int32_t h4);

  /// @brief Method CombineHash, addr 0x69cd874, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t CombineHash(int32_t h1, int32_t h2, int32_t h3, int32_t h4, int32_t h5);

  /// @brief Method CombineHash, addr 0x69cd8c0, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t CombineHash(int32_t h1, int32_t h2, int32_t h3, int32_t h4, int32_t h5, int32_t h6);

  /// @brief Method CombineHash, addr 0x69cd91c, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t CombineHash(int32_t h1, int32_t h2, int32_t h3, int32_t h4, int32_t h5, int32_t h6, int32_t h7);

  /// @brief Method CombineHash, addr 0x69cd948, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t CombineHash(::ArrayW<int32_t> hashes);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19256 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Timeline::HashUtility) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Timeline
