#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/ContentDispositionHeaderValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ContentDispositionHeaderValue)
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net::Http::Headers {
class NameValueHeaderValue;
}
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class ContentDispositionHeaderValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::ContentDispositionHeaderValue);
// Dependencies System.Object
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: System.Net.Http.Headers.ContentDispositionHeaderValue
class CORDL_TYPE ContentDispositionHeaderValue : public ::System::Object {
public:
  // Declarations
  __declspec(property(put = set_DispositionType)) ::StringW DispositionType;

  __declspec(property(put = set_FileName)) ::StringW FileName;

  __declspec(property(put = set_FileNameStar)) ::StringW FileNameStar;

  __declspec(property(put = set_Name)) ::StringW Name;

  __declspec(property(get = get_Parameters)) ::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* Parameters;

  /// @brief Field dispositionType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_dispositionType, put = __cordl_internal_set_dispositionType)) ::StringW dispositionType;

  /// @brief Field parameters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_parameters,
                      put = __cordl_internal_set_parameters)) ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* parameters;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method EncodeBase64Value, addr 0x5ec8b54, size 0x1fc, virtual false, abstract: false, final false
  static inline ::StringW EncodeBase64Value(::StringW value);

  /// @brief Method EncodeRFC5987, addr 0x5ec8de8, size 0x2b4, virtual false, abstract: false, final false
  static inline ::StringW EncodeRFC5987(::StringW value);

  /// @brief Method Equals, addr 0x5ec90f8, size 0xd0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x5ec9330, size 0x80, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Net::Http::Headers::ContentDispositionHeaderValue* New_ctor();

  static inline ::System::Net::Http::Headers::ContentDispositionHeaderValue* New_ctor(::StringW dispositionType);

  static inline ::System::Net::Http::Headers::ContentDispositionHeaderValue* New_ctor(::System::Net::Http::Headers::ContentDispositionHeaderValue* source);

  /// @brief Method SetValue, addr 0x5ec8d50, size 0x98, virtual false, abstract: false, final false
  inline void SetValue(::StringW key, ::StringW value);

  /// @brief Method System.ICloneable.Clone, addr 0x5ec909c, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method ToString, addr 0x5ec93b0, size 0x5c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryParse, addr 0x5ec940c, size 0x16c, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, ::ByRef<::System::Net::Http::Headers::ContentDispositionHeaderValue*> parsedValue);

  constexpr ::StringW const& __cordl_internal_get_dispositionType() const;

  constexpr ::StringW& __cordl_internal_get_dispositionType();

  constexpr ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* const& __cordl_internal_get_parameters() const;

  constexpr ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*& __cordl_internal_get_parameters();

  constexpr void __cordl_internal_set_dispositionType(::StringW value);

  constexpr void __cordl_internal_set_parameters(::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* value);

  /// @brief Method .ctor, addr 0x5ec8870, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5ec554c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW dispositionType);

  /// @brief Method .ctor, addr 0x5ec889c, size 0x220, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::Headers::ContentDispositionHeaderValue* source);

  /// @brief Method get_Parameters, addr 0x5ec8abc, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* get_Parameters();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method set_DispositionType, addr 0x5ec8874, size 0x28, virtual false, abstract: false, final false
  inline void set_DispositionType(::StringW value);

  /// @brief Method set_FileName, addr 0x5ec55e4, size 0x70, virtual false, abstract: false, final false
  inline void set_FileName(::StringW value);

  /// @brief Method set_FileNameStar, addr 0x5ec5654, size 0x70, virtual false, abstract: false, final false
  inline void set_FileNameStar(::StringW value);

  /// @brief Method set_Name, addr 0x5ec5574, size 0x70, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentDispositionHeaderValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContentDispositionHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContentDispositionHeaderValue(ContentDispositionHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContentDispositionHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContentDispositionHeaderValue(ContentDispositionHeaderValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20156 };

  /// @brief Field dispositionType, offset: 0x10, size: 0x8, def value: None
  ::StringW ___dispositionType;

  /// @brief Field parameters, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* ___parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::Headers::ContentDispositionHeaderValue, ___dispositionType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::ContentDispositionHeaderValue, ___parameters) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::ContentDispositionHeaderValue, 0x20>, "Size mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::ContentDispositionHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::ContentDispositionHeaderValue*, "System.Net.Http.Headers", "ContentDispositionHeaderValue");
