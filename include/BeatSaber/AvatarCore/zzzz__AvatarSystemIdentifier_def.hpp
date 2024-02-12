#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarSystemIdentifier)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
struct AvatarSystemIdentifier;
}
// Write type traits
MARK_VAL_T(::BeatSaber::AvatarCore::AvatarSystemIdentifier);
// Type: BeatSaber.AvatarCore::AvatarSystemIdentifier
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15264))
// CS Name: ::BeatSaber.AvatarCore::AvatarSystemIdentifier
struct CORDL_TYPE AvatarSystemIdentifier {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::AvatarCore::AvatarSystemIdentifier>"
  constexpr operator ::System::IEquatable_1<::BeatSaber::AvatarCore::AvatarSystemIdentifier>*();

  /// @brief Convert to "::System::IEquatable_1<::BeatSaber::AvatarCore::AvatarSystemIdentifier>"
  constexpr ::System::IEquatable_1<::BeatSaber::AvatarCore::AvatarSystemIdentifier>* i___System__IEquatable_1___BeatSaber__AvatarCore__AvatarSystemIdentifier_();

  /// @brief Method .ctor, addr 0xe19f88, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW avatarSystemTypeIdentifier);

  /// @brief Method HashAvatarSystemTypeMultiplier, addr 0xe19164, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t HashAvatarSystemTypeMultiplier(::StringW avatarSystemTypeIdentifier);

  /// @brief Method Equals, addr 0xe19fac, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::BeatSaber::AvatarCore::AvatarSystemIdentifier other);

  /// @brief Method Equals, addr 0xe19fbc, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0xe1a034, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method op_Equality, addr 0xe1a03c, size 0x78, virtual false, abstract: false, final false
  static inline bool op_Equality(::BeatSaber::AvatarCore::AvatarSystemIdentifier obj1, ::BeatSaber::AvatarCore::AvatarSystemIdentifier obj2);

  /// @brief Method op_Inequality, addr 0xe1a0b4, size 0x7c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::BeatSaber::AvatarCore::AvatarSystemIdentifier obj1, ::BeatSaber::AvatarCore::AvatarSystemIdentifier obj2);

  // Ctor Parameters [CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "hash", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr AvatarSystemIdentifier(::StringW value, uint32_t hash) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarSystemIdentifier();

  /// @brief Field value, offset: 0x0, size: 0x8, def value: None
  ::StringW value;

  /// @brief Field hash, offset: 0x8, size: 0x4, def value: None
  uint32_t hash;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarSystemIdentifier, 0x10>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSystemIdentifier, value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSystemIdentifier, hash) == 0x8, "Offset mismatch!");

} // namespace BeatSaber::AvatarCore
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarSystemIdentifier, "BeatSaber.AvatarCore", "AvatarSystemIdentifier");
