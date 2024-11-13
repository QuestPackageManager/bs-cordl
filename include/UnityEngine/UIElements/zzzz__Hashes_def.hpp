#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Hashes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Hashes_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Hashes)
namespace UnityEngine::UIElements {
struct __Hashes___hashes_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Hashes;
}
namespace UnityEngine::UIElements {
struct __Hashes___hashes_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Hashes);
MARK_VAL_T(::UnityEngine::UIElements::__Hashes___hashes_e__FixedBuffer);
// Type: ::<hashes>e__FixedBuffer
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: Some(0) }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::Hashes::<hashes>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE __Hashes___hashes_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Hashes___hashes_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Hashes___hashes_e__FixedBuffer(int32_t FixedElementField) noexcept;

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  int32_t FixedElementField;

  /// @brief Size padding 0x10 - 0x4 = 0xc, packed as 0xc
  uint8_t _cordl_size_padding[0xc];

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6138 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Hashes___hashes_e__FixedBuffer, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__Hashes___hashes_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::Hashes
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::Hashes
struct CORDL_TYPE Hashes {
public:
  // Declarations
  using _hashes_e__FixedBuffer = ::UnityEngine::UIElements::__Hashes___hashes_e__FixedBuffer;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Hashes();

  // Ctor Parameters [CppParam { name: "hashes", ty: "::UnityEngine::UIElements::__Hashes___hashes_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr Hashes(::UnityEngine::UIElements::__Hashes___hashes_e__FixedBuffer hashes) noexcept;

  /// @brief Field hashes, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::UIElements::__Hashes___hashes_e__FixedBuffer hashes;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6139 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field kSize offset 0xffffffff size 0x4
  static constexpr int32_t kSize{ static_cast<int32_t>(0x4) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Hashes, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Hashes, hashes) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Hashes, "UnityEngine.UIElements", "Hashes");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Hashes___hashes_e__FixedBuffer, "UnityEngine.UIElements", "Hashes/<hashes>e__FixedBuffer");
