#pragma once
// IWYU pragma private; include "System/OrdinalCaseSensitiveComparer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__OrdinalComparer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OrdinalCaseSensitiveComparer)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class OrdinalCaseSensitiveComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::OrdinalCaseSensitiveComparer);
// Dependencies System.OrdinalComparer, System.Runtime.Serialization.ISerializable
namespace System {
// Is value type: false
// CS Name: System.OrdinalCaseSensitiveComparer
class CORDL_TYPE OrdinalCaseSensitiveComparer : public ::System::OrdinalComparer {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method Compare, addr 0x3e03668, size 0x10, virtual true, abstract: false, final false
  inline int32_t Compare(::StringW x, ::StringW y);

  /// @brief Method Equals, addr 0x3e03678, size 0x10, virtual true, abstract: false, final false
  inline bool Equals(::StringW x, ::StringW y);

  /// @brief Method GetHashCode, addr 0x3e03688, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetHashCode(::StringW obj);

  /// @brief Method GetObjectData, addr 0x3e036b0, size 0xb4, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::OrdinalCaseSensitiveComparer* New_ctor();

  /// @brief Method .ctor, addr 0x3e02dd4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OrdinalCaseSensitiveComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OrdinalCaseSensitiveComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OrdinalCaseSensitiveComparer(OrdinalCaseSensitiveComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OrdinalCaseSensitiveComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OrdinalCaseSensitiveComparer(OrdinalCaseSensitiveComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2476 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::OrdinalCaseSensitiveComparer, 0x18>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::OrdinalCaseSensitiveComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::OrdinalCaseSensitiveComparer*, "System", "OrdinalCaseSensitiveComparer");
