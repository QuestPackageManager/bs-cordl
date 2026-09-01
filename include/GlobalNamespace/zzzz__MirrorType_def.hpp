#pragma once
// IWYU pragma private; include "GlobalNamespace\MirrorType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MirrorType)
// Forward declare root types
namespace GlobalNamespace {
struct MirrorType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MirrorType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MirrorType, "", "MirrorType");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MirrorType
struct CORDL_TYPE MirrorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MirrorType_Unwrapped
  enum struct __MirrorType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_FakeMirror = static_cast<int32_t>(0x1),
    __E_RenderedMirror = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MirrorType_Unwrapped() const noexcept {
    return static_cast<__MirrorType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MirrorType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MirrorType(int32_t value__) noexcept;

  /// @brief Field FakeMirror value: I32(1)
  static ::GlobalNamespace::MirrorType const FakeMirror;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::MirrorType const None;

  /// @brief Field RenderedMirror value: I32(2)
  static ::GlobalNamespace::MirrorType const RenderedMirror;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20665 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MirrorType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MirrorType) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
