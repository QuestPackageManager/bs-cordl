#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__OrdinalComparer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OrdinalCaseSensitiveComparer)
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
class OrdinalCaseSensitiveComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::OrdinalCaseSensitiveComparer);
// Type: System::OrdinalCaseSensitiveComparer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2474))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2475))
// CS Name: ::System::OrdinalCaseSensitiveComparer*
class CORDL_TYPE OrdinalCaseSensitiveComparer : public ::System::OrdinalComparer {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  static inline ::System::OrdinalCaseSensitiveComparer* New_ctor();

  /// @brief Method .ctor addr 0x2468468 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method Compare addr 0x2468d00 size 0x10 virtual true final false
  inline int32_t Compare(::StringW x, ::StringW y);

  /// @brief Method Equals addr 0x2468d10 size 0x10 virtual true final false
  inline bool Equals(::StringW x, ::StringW y);

  /// @brief Method GetHashCode addr 0x2468d20 size 0x20 virtual true final false
  inline int32_t GetHashCode(::StringW obj);

  /// @brief Method GetObjectData addr 0x2468d40 size 0xb4 virtual true final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "OrdinalCaseSensitiveComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OrdinalCaseSensitiveComparer(OrdinalCaseSensitiveComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OrdinalCaseSensitiveComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OrdinalCaseSensitiveComparer(OrdinalCaseSensitiveComparer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OrdinalCaseSensitiveComparer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::OrdinalCaseSensitiveComparer, 0x18>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::OrdinalCaseSensitiveComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::OrdinalCaseSensitiveComparer*, "System", "OrdinalCaseSensitiveComparer");
