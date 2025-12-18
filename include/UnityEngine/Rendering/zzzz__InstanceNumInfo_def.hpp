#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceNumInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceNumInfo)
namespace UnityEngine::Rendering {
struct InstanceNumInfo__InstanceNums_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct InstanceType;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct InstanceNumInfo;
}
namespace UnityEngine::Rendering {
struct InstanceNumInfo__InstanceNums_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::InstanceNumInfo);
MARK_VAL_T(::UnityEngine::Rendering::InstanceNumInfo__InstanceNums_e__FixedBuffer);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceNumInfo/<InstanceNums>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE InstanceNumInfo__InstanceNums_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceNumInfo__InstanceNums_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InstanceNumInfo__InstanceNums_e__FixedBuffer(int32_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17698 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  int32_t FixedElementField;

  /// @brief Size padding 0x8 - 0x4 = 0x4, packed as 0x4
  uint8_t _cordl_size_padding[0x4];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceNumInfo__InstanceNums_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceNumInfo__InstanceNums_e__FixedBuffer, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.InstanceNumInfo::<InstanceNums>e__FixedBuffer
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceNumInfo
struct CORDL_TYPE InstanceNumInfo {
public:
  // Declarations
  using _InstanceNums_e__FixedBuffer = ::UnityEngine::Rendering::InstanceNumInfo__InstanceNums_e__FixedBuffer;

  /// @brief Method GetInstanceNum, addr 0x6676ffc, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetInstanceNum(::UnityEngine::Rendering::InstanceType type);

  /// @brief Method GetInstanceNumIncludingChildren, addr 0x6677004, size 0x140, virtual false, abstract: false, final false
  inline int32_t GetInstanceNumIncludingChildren(::UnityEngine::Rendering::InstanceType type);

  /// @brief Method GetTotalInstanceNum, addr 0x6677144, size 0xc, virtual false, abstract: false, final false
  inline int32_t GetTotalInstanceNum();

  /// @brief Method InitDefault, addr 0x6676fe0, size 0x8, virtual false, abstract: false, final false
  inline void InitDefault();

  /// @brief Method .ctor, addr 0x6676ff4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t meshRendererNum, int32_t speedTreeNum);

  /// @brief Method .ctor, addr 0x6676fe8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::InstanceType type, int32_t instanceNum);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceNumInfo();

  // Ctor Parameters [CppParam { name: "InstanceNums", ty: "::UnityEngine::Rendering::InstanceNumInfo__InstanceNums_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr InstanceNumInfo(::UnityEngine::Rendering::InstanceNumInfo__InstanceNums_e__FixedBuffer InstanceNums) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17699 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field InstanceNums, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::InstanceNumInfo__InstanceNums_e__FixedBuffer InstanceNums;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceNumInfo, InstanceNums) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceNumInfo, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceNumInfo, "UnityEngine.Rendering", "InstanceNumInfo");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceNumInfo__InstanceNums_e__FixedBuffer, "UnityEngine.Rendering", "InstanceNumInfo/<InstanceNums>e__FixedBuffer");
