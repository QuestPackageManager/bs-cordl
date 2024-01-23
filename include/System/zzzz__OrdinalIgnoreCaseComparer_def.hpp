#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__OrdinalComparer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OrdinalIgnoreCaseComparer)
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class OrdinalIgnoreCaseComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::OrdinalIgnoreCaseComparer);
// Type: System::OrdinalIgnoreCaseComparer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2476))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2478))
// CS Name: ::System::OrdinalIgnoreCaseComparer*
class CORDL_TYPE OrdinalIgnoreCaseComparer : public ::System::OrdinalComparer {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  static inline ::System::OrdinalIgnoreCaseComparer* New_ctor();

  /// @brief Method .ctor, addr 0x25c5398, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Compare, addr 0x25c5d1c, size 0x18, virtual true, abstract: false, final false
  inline int32_t Compare(::StringW x, ::StringW y);

  /// @brief Method Equals, addr 0x25c5d34, size 0x18, virtual true, abstract: false, final false
  inline bool Equals(::StringW x, ::StringW y);

  /// @brief Method GetHashCode, addr 0x25c5d4c, size 0x64, virtual true, abstract: false, final false
  inline int32_t GetHashCode(::StringW obj);

  /// @brief Method GetObjectData, addr 0x25c5db0, size 0xb4, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "OrdinalIgnoreCaseComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OrdinalIgnoreCaseComparer(OrdinalIgnoreCaseComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OrdinalIgnoreCaseComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OrdinalIgnoreCaseComparer(OrdinalIgnoreCaseComparer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OrdinalIgnoreCaseComparer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::OrdinalIgnoreCaseComparer, 0x18>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::OrdinalIgnoreCaseComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::OrdinalIgnoreCaseComparer*, "System", "OrdinalIgnoreCaseComparer");
