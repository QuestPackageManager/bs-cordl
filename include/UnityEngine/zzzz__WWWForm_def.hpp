#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WWWForm)
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace UnityEngine {
class WWWForm;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::WWWForm);
// Type: UnityEngine::WWWForm
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15573))
// CS Name: ::UnityEngine::WWWForm*
class CORDL_TYPE WWWForm : public ::System::Object {
public:
  // Declarations
  /// @brief Field dDash, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dDash, put = setStaticF_dDash))::ArrayW<uint8_t, ::Array<uint8_t>*> dDash;

  /// @brief Field crlf, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_crlf, put = setStaticF_crlf))::ArrayW<uint8_t, ::Array<uint8_t>*> crlf;

  /// @brief Field contentTypeHeader, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_contentTypeHeader, put = setStaticF_contentTypeHeader))::ArrayW<uint8_t, ::Array<uint8_t>*> contentTypeHeader;

  /// @brief Field dispositionHeader, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dispositionHeader, put = setStaticF_dispositionHeader))::ArrayW<uint8_t, ::Array<uint8_t>*> dispositionHeader;

  /// @brief Field endQuote, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_endQuote, put = setStaticF_endQuote))::ArrayW<uint8_t, ::Array<uint8_t>*> endQuote;

  /// @brief Field fileNameField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_fileNameField, put = setStaticF_fileNameField))::ArrayW<uint8_t, ::Array<uint8_t>*> fileNameField;

  /// @brief Field ampersand, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ampersand, put = setStaticF_ampersand))::ArrayW<uint8_t, ::Array<uint8_t>*> ampersand;

  /// @brief Field equal, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_equal, put = setStaticF_equal))::ArrayW<uint8_t, ::Array<uint8_t>*> equal;

  static inline void setStaticF_dDash(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_dDash();

  static inline void setStaticF_crlf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_crlf();

  static inline void setStaticF_contentTypeHeader(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_contentTypeHeader();

  static inline void setStaticF_dispositionHeader(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_dispositionHeader();

  static inline void setStaticF_endQuote(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_endQuote();

  static inline void setStaticF_fileNameField(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_fileNameField();

  static inline void setStaticF_ampersand(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_ampersand();

  static inline void setStaticF_equal(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_equal();

  /// @brief Method get_DefaultEncoding, addr 0x2eaccac, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Text::Encoding* get_DefaultEncoding();

  // Ctor Parameters [CppParam { name: "", ty: "WWWForm", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WWWForm(WWWForm&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WWWForm", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WWWForm(WWWForm const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WWWForm();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::WWWForm, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::WWWForm);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WWWForm*, "UnityEngine", "WWWForm");
