#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/AttributeData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AttributeData)
// Forward declare root types
namespace System::Runtime::Serialization {
class AttributeData;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::AttributeData);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.AttributeData
class CORDL_TYPE AttributeData : public ::System::Object {
public:
  // Declarations
  /// @brief Field localName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_localName, put = __cordl_internal_set_localName)) ::StringW localName;

  /// @brief Field ns, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ns, put = __cordl_internal_set_ns)) ::StringW ns;

  /// @brief Field prefix, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_prefix, put = __cordl_internal_set_prefix)) ::StringW prefix;

  /// @brief Field value, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::StringW value;

  static inline ::System::Runtime::Serialization::AttributeData* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_localName() const;

  constexpr ::StringW& __cordl_internal_get_localName();

  constexpr ::StringW const& __cordl_internal_get_ns() const;

  constexpr ::StringW& __cordl_internal_get_ns();

  constexpr ::StringW const& __cordl_internal_get_prefix() const;

  constexpr ::StringW& __cordl_internal_get_prefix();

  constexpr ::StringW const& __cordl_internal_get_value() const;

  constexpr ::StringW& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_localName(::StringW value);

  constexpr void __cordl_internal_set_ns(::StringW value);

  constexpr void __cordl_internal_set_prefix(::StringW value);

  constexpr void __cordl_internal_set_value(::StringW value);

  /// @brief Method .ctor, addr 0x5f39144, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AttributeData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttributeData(AttributeData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttributeData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttributeData(AttributeData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16998 };

  /// @brief Field prefix, offset: 0x10, size: 0x8, def value: None
  ::StringW ___prefix;

  /// @brief Field ns, offset: 0x18, size: 0x8, def value: None
  ::StringW ___ns;

  /// @brief Field localName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___localName;

  /// @brief Field value, offset: 0x28, size: 0x8, def value: None
  ::StringW ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::AttributeData, ___prefix) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::AttributeData, ___ns) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::AttributeData, ___localName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::AttributeData, ___value) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::AttributeData, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::AttributeData);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::AttributeData*, "System.Runtime.Serialization", "AttributeData");
