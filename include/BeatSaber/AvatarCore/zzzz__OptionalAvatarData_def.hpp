#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/OptionalAvatarData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OptionalAvatarData)
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
struct OptionalAvatarData;
}
// Write type traits
MARK_VAL_T(::BeatSaber::AvatarCore::OptionalAvatarData);
// Type: BeatSaber.AvatarCore::OptionalAvatarData
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: true
// CS Name: ::BeatSaber.AvatarCore::OptionalAvatarData
struct CORDL_TYPE OptionalAvatarData {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::AvatarCore::OptionalAvatarData>"
  constexpr operator ::System::IEquatable_1<::BeatSaber::AvatarCore::OptionalAvatarData>*();

  /// @brief Method Equals, addr 0x2223900, size 0xc0, virtual true, abstract: false, final true
  inline bool Equals(::BeatSaber::AvatarCore::OptionalAvatarData other);

  /// @brief Convert to "::System::IEquatable_1<::BeatSaber::AvatarCore::OptionalAvatarData>"
  constexpr ::System::IEquatable_1<::BeatSaber::AvatarCore::OptionalAvatarData>* i___System__IEquatable_1___BeatSaber__AvatarCore__OptionalAvatarData_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OptionalAvatarData();

  // Ctor Parameters [CppParam { name: "dataType", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "data", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }]
  constexpr OptionalAvatarData(uint32_t dataType, int32_t length, ::ArrayW<uint8_t, ::Array<uint8_t>*> data) noexcept;

  /// @brief Field dataType, offset: 0x0, size: 0x4, def value: None
  uint32_t dataType;

  /// @brief Field length, offset: 0x4, size: 0x4, def value: None
  int32_t length;

  /// @brief Field data, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> data;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17542 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field kMaxDataSize offset 0xffffffff size 0x4
  static constexpr int32_t kMaxDataSize{ static_cast<int32_t>(0x800) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::OptionalAvatarData, 0x10>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::OptionalAvatarData, dataType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::OptionalAvatarData, length) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::OptionalAvatarData, data) == 0x8, "Offset mismatch!");

} // namespace BeatSaber::AvatarCore
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::OptionalAvatarData, "BeatSaber.AvatarCore", "OptionalAvatarData");
