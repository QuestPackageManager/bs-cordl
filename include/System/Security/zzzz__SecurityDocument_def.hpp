#pragma once
// IWYU pragma private; include "System/Security/SecurityDocument.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecurityDocument)
namespace System::Security {
class SecurityElement;
}
// Forward declare root types
namespace System::Security {
class SecurityDocument;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::SecurityDocument);
// Type: System.Security::SecurityDocument
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Security {
// Is value type: false
// CS Name: ::System.Security::SecurityDocument*
class CORDL_TYPE SecurityDocument : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_data, put = __cordl_internal_set_m_data)) ::ArrayW<uint8_t, ::Array<uint8_t>*> m_data;

  /// @brief Method AddString, addr 0x3c1d75c, size 0x14c, virtual false, abstract: false, final false
  inline void AddString(::StringW str, ByRef<int32_t> position);

  /// @brief Method AddToken, addr 0x3c1de70, size 0x5c, virtual false, abstract: false, final false
  inline void AddToken(uint8_t b, ByRef<int32_t> position);

  /// @brief Method AppendString, addr 0x3c1d8a8, size 0x8c, virtual false, abstract: false, final false
  inline void AppendString(::StringW str, ByRef<int32_t> position);

  /// @brief Method EncodedStringSize, addr 0x3c1d934, size 0x20, virtual false, abstract: false, final false
  static inline int32_t EncodedStringSize(::StringW str);

  /// @brief Method GetElement, addr 0x3c1dee8, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Security::SecurityElement* GetElement(int32_t position, bool bCreate);

  /// @brief Method GetRootElement, addr 0x3c1decc, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Security::SecurityElement* GetRootElement();

  /// @brief Method GetString, addr 0x3c1d954, size 0x300, virtual false, abstract: false, final false
  inline ::StringW GetString(ByRef<int32_t> position, bool bCreate);

  /// @brief Method GuaranteeSize, addr 0x3c1d6b8, size 0xa4, virtual false, abstract: false, final false
  inline void GuaranteeSize(int32_t size);

  /// @brief Method InternalGetElement, addr 0x3c1df04, size 0x1fc, virtual false, abstract: false, final false
  inline ::System::Security::SecurityElement* InternalGetElement(ByRef<int32_t> position, bool bCreate);

  static inline ::System::Security::SecurityDocument* New_ctor(int32_t numData);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_m_data() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_m_data();

  constexpr void __cordl_internal_set_m_data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x3c1d650, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(int32_t numData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecurityDocument();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SecurityDocument", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecurityDocument(SecurityDocument&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecurityDocument", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecurityDocument(SecurityDocument const&) = delete;

  /// @brief Field m_data, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___m_data;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2884 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::SecurityDocument, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Security::SecurityDocument, ___m_data) == 0x10, "Offset mismatch!");

} // namespace System::Security
NEED_NO_BOX(::System::Security::SecurityDocument);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::SecurityDocument*, "System.Security", "SecurityDocument");
