#pragma once
// IWYU pragma private; include "System/Xml/TernaryTreeReadOnly.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TernaryTreeReadOnly)
// Forward declare root types
namespace System::Xml {
class TernaryTreeReadOnly;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::TernaryTreeReadOnly);
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.TernaryTreeReadOnly
class CORDL_TYPE TernaryTreeReadOnly : public ::System::Object {
public:
  // Declarations
  /// @brief Field nodeBuffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_nodeBuffer, put = __cordl_internal_set_nodeBuffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> nodeBuffer;

  /// @brief Method FindCaseInsensitiveString, addr 0x430b6ec, size 0x12c, virtual false, abstract: false, final false
  inline uint8_t FindCaseInsensitiveString(::StringW stringToFind);

  static inline ::System::Xml::TernaryTreeReadOnly* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> nodeBuffer);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_nodeBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_nodeBuffer();

  constexpr void __cordl_internal_set_nodeBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x430c918, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> nodeBuffer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TernaryTreeReadOnly();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TernaryTreeReadOnly", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TernaryTreeReadOnly(TernaryTreeReadOnly&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TernaryTreeReadOnly", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TernaryTreeReadOnly(TernaryTreeReadOnly const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7204 };

  /// @brief Field nodeBuffer, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___nodeBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::TernaryTreeReadOnly, ___nodeBuffer) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::TernaryTreeReadOnly, 0x18>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::TernaryTreeReadOnly);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::TernaryTreeReadOnly*, "System.Xml", "TernaryTreeReadOnly");
