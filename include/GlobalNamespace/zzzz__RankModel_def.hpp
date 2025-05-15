#pragma once
// IWYU pragma private; include "GlobalNamespace/RankModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RankModel)
namespace GlobalNamespace {
struct RankModel_Rank;
}
// Forward declare root types
namespace GlobalNamespace {
struct RankModel_Rank;
}
namespace GlobalNamespace {
class RankModel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RankModel_Rank);
MARK_REF_PTR_T(::GlobalNamespace::RankModel);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: RankModel/Rank
struct CORDL_TYPE RankModel_Rank {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RankModel_Rank_Unwrapped
  enum struct __RankModel_Rank_Unwrapped : int32_t {
    __E_E = static_cast<int32_t>(0x0),
    __E_D = static_cast<int32_t>(0x1),
    __E_C = static_cast<int32_t>(0x2),
    __E_B = static_cast<int32_t>(0x3),
    __E_A = static_cast<int32_t>(0x4),
    __E_S = static_cast<int32_t>(0x5),
    __E_SS = static_cast<int32_t>(0x6),
    __E_SSS = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RankModel_Rank_Unwrapped() const noexcept {
    return static_cast<__RankModel_Rank_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RankModel_Rank();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RankModel_Rank(int32_t value__) noexcept;

  /// @brief Field A value: I32(4)
  static ::GlobalNamespace::RankModel_Rank const A;

  /// @brief Field B value: I32(3)
  static ::GlobalNamespace::RankModel_Rank const B;

  /// @brief Field C value: I32(2)
  static ::GlobalNamespace::RankModel_Rank const C;

  /// @brief Field D value: I32(1)
  static ::GlobalNamespace::RankModel_Rank const D;

  /// @brief Field E value: I32(0)
  static ::GlobalNamespace::RankModel_Rank const E;

  /// @brief Field S value: I32(5)
  static ::GlobalNamespace::RankModel_Rank const S;

  /// @brief Field SS value: I32(6)
  static ::GlobalNamespace::RankModel_Rank const SS;

  /// @brief Field SSS value: I32(7)
  static ::GlobalNamespace::RankModel_Rank const SSS;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17019 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RankModel_Rank, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RankModel_Rank, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RankModel
class CORDL_TYPE RankModel : public ::System::Object {
public:
  // Declarations
  using Rank = ::GlobalNamespace::RankModel_Rank;

  /// @brief Method GetRankForScore, addr 0x27249a4, size 0xc8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::RankModel_Rank GetRankForScore(int32_t multipliedScore, int32_t modifiedScore, int32_t maxMultipliedScore, int32_t maxModifiedScore);

  /// @brief Method GetRankName, addr 0x27248e8, size 0xbc, virtual false, abstract: false, final false
  static inline ::StringW GetRankName(::GlobalNamespace::RankModel_Rank rank);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RankModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RankModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RankModel(RankModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RankModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RankModel(RankModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17020 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RankModel, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RankModel_Rank, "", "RankModel/Rank");
NEED_NO_BOX(::GlobalNamespace::RankModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RankModel*, "", "RankModel");
