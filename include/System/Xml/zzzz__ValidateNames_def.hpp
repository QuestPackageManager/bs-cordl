#pragma once
// IWYU pragma private; include "System\Xml\ValidateNames.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ValidateNames)
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Xml {
class ValidateNames;
}
// Write type traits
MARK_REF_T(::System::Xml::ValidateNames*);
DEFINE_IL2CPP_CLASS(::System::Xml::ValidateNames*, "System.Xml", "ValidateNames");
// Dependencies System.Object, System.Xml.XmlCharType
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.ValidateNames
class CORDL_TYPE ValidateNames : public ::System::Object {
public:
  // Declarations
  /// @brief Field xmlCharType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_xmlCharType, put = setStaticF_xmlCharType)) ::System::Xml::XmlCharType xmlCharType;

  /// @brief Method GetInvalidNameException, addr 0x62d9698, size 0x1d0, virtual false, abstract: false, final false
  static inline ::System::Exception* GetInvalidNameException(::StringW s, int32_t offsetStartChar, int32_t offsetBadChar);

  /// @brief Method IsNameNoNamespaces, addr 0x62d90bc, size 0x84, virtual false, abstract: false, final false
  static inline bool IsNameNoNamespaces(::StringW s);

  /// @brief Method ParseNCName, addr 0x62d9280, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t ParseNCName(::StringW s);

  /// @brief Method ParseNCName, addr 0x62d9140, size 0x140, virtual false, abstract: false, final false
  static inline int32_t ParseNCName(::StringW s, int32_t offset);

  /// @brief Method ParseNameNoNamespaces, addr 0x62d8f5c, size 0x160, virtual false, abstract: false, final false
  static inline int32_t ParseNameNoNamespaces(::StringW s, int32_t offset);

  /// @brief Method ParseNmtoken, addr 0x62d8da4, size 0xd8, virtual false, abstract: false, final false
  static inline int32_t ParseNmtoken(::StringW s, int32_t offset);

  /// @brief Method ParseNmtokenNoNamespaces, addr 0x62d8e7c, size 0xe0, virtual false, abstract: false, final false
  static inline int32_t ParseNmtokenNoNamespaces(::StringW s, int32_t offset);

  /// @brief Method ParseQName, addr 0x62d92dc, size 0xe4, virtual false, abstract: false, final false
  static inline int32_t ParseQName(::StringW s, int32_t offset, ::by_ref<int32_t> colonOffset);

  /// @brief Method ParseQNameThrow, addr 0x62d93c0, size 0x11c, virtual false, abstract: false, final false
  static inline void ParseQNameThrow(::StringW s, ::by_ref<::StringW> prefix, ::by_ref<::StringW> localName);

  /// @brief Method SplitQName, addr 0x62d9868, size 0x130, virtual false, abstract: false, final false
  static inline void SplitQName(::StringW name, ::by_ref<::StringW> prefix, ::by_ref<::StringW> lname);

  /// @brief Method ThrowInvalidName, addr 0x62d94dc, size 0x188, virtual false, abstract: false, final false
  static inline void ThrowInvalidName(::StringW s, int32_t offsetStartChar, int32_t offsetBadChar);

  static inline ::System::Xml::XmlCharType getStaticF_xmlCharType();

  static inline void setStaticF_xmlCharType(::System::Xml::XmlCharType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValidateNames();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValidateNames", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValidateNames(ValidateNames&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValidateNames", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValidateNames(ValidateNames const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9430 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::ValidateNames) == 0x10, "Size mismatch!");

} // namespace System::Xml
