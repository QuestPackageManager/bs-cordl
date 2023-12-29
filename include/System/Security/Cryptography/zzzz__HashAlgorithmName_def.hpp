#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HashAlgorithmName)
namespace System {
class Object;
}
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace System::Security::Cryptography {
struct HashAlgorithmName;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::HashAlgorithmName);
// Type: System.Security.Cryptography::HashAlgorithmName
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2913))
// CS Name: ::System.Security.Cryptography::HashAlgorithmName
struct CORDL_TYPE HashAlgorithmName {
public:
  // Declarations
  __declspec(property(get = get_Name))::StringW Name;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Security::Cryptography::HashAlgorithmName>"
  constexpr operator ::System::IEquatable_1<::System::Security::Cryptography::HashAlgorithmName>*();

  /// @brief Method get_SHA256 addr 0x23020b4 size 0x40 virtual false final false
  static inline ::System::Security::Cryptography::HashAlgorithmName get_SHA256();

  /// @brief Method .ctor addr 0x23020f4 size 0x8 virtual false final false
  inline void _ctor(::StringW name);

  /// @brief Method get_Name addr 0x23020fc size 0x8 virtual false final false
  inline ::StringW get_Name();

  /// @brief Method ToString addr 0x2302104 size 0x54 virtual true final false
  inline ::StringW ToString();

  /// @brief Method Equals addr 0x2302158 size 0x7c virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x23021d4 size 0xc virtual true final true
  inline bool Equals(::System::Security::Cryptography::HashAlgorithmName other);

  /// @brief Method GetHashCode addr 0x23021e0 size 0x18 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "_name", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr HashAlgorithmName(::StringW _name) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HashAlgorithmName();

  /// @brief Field _name, offset: 0x0, size: 0x8, def value: None
  ::StringW _name;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::HashAlgorithmName, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::HashAlgorithmName, _name) == 0x0, "Offset mismatch!");

} // namespace System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::HashAlgorithmName, "System.Security.Cryptography", "HashAlgorithmName");
