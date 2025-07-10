#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/HeaderInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/Headers/zzzz__HttpHeaderKind_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HeaderInfo)
namespace GlobalNamespace {
template <typename T, typename U> class HeaderInfo_CollectionHeaderTypeInfo_2;
}
namespace GlobalNamespace {
template <typename T, typename U> class HeaderInfo_HeaderTypeInfo_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net::Http::Headers {
struct HttpHeaderKind;
}
namespace System::Net::Http::Headers {
class HttpHeaders;
}
namespace System::Net::Http::Headers {
template <typename T> class TryParseDelegate_1;
}
namespace System::Net::Http::Headers {
template <typename T> class TryParseListDelegate_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class HeaderInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::HeaderInfo);
// Dependencies System.Net.Http.Headers.HttpHeaderKind, System.Object
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: System.Net.Http.Headers.HeaderInfo
class CORDL_TYPE HeaderInfo : public ::System::Object {
public:
  // Declarations
  template <typename T, typename U> using CollectionHeaderTypeInfo_2 = ::GlobalNamespace::HeaderInfo_CollectionHeaderTypeInfo_2<T, U>;

  template <typename T, typename U> using HeaderTypeInfo_2 = ::GlobalNamespace::HeaderInfo_HeaderTypeInfo_2<T, U>;

  /// @brief Field AllowsMany, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_AllowsMany, put = __cordl_internal_set_AllowsMany)) bool AllowsMany;

  __declspec(property(get = get_CustomToString, put = set_CustomToString)) ::System::Func_2<::System::Object*, ::StringW>* CustomToString;

  /// @brief Field HeaderKind, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_HeaderKind, put = __cordl_internal_set_HeaderKind)) ::System::Net::Http::Headers::HttpHeaderKind HeaderKind;

  /// @brief Field Name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Name, put = __cordl_internal_set_Name)) ::StringW Name;

  __declspec(property(get = get_Separator)) ::StringW Separator;

  /// @brief Field <CustomToString>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__CustomToString_k__BackingField,
                      put = __cordl_internal_set__CustomToString_k__BackingField)) ::System::Func_2<::System::Object*, ::StringW>* _CustomToString_k__BackingField;

  /// @brief Method AddToCollection, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AddToCollection(::System::Object* collection, ::System::Object* value);

  /// @brief Method CreateCollection, addr 0x421f64c, size 0x10, virtual false, abstract: false, final false
  inline ::System::Object* CreateCollection(::System::Net::Http::Headers::HttpHeaders* headers);

  /// @brief Method CreateCollection, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* CreateCollection(::System::Net::Http::Headers::HttpHeaders* headers, ::System::Net::Http::Headers::HeaderInfo* headerInfo);

  /// @brief Method CreateMulti, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::System::Net::Http::Headers::HeaderInfo* CreateMulti(::StringW name, ::System::Net::Http::Headers::TryParseListDelegate_1<T>* elementParser,
                                                                      ::System::Net::Http::Headers::HttpHeaderKind headerKind, int32_t minimalCount, ::StringW separator);

  /// @brief Method CreateSingle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::System::Net::Http::Headers::HeaderInfo* CreateSingle(::StringW name, ::System::Net::Http::Headers::TryParseDelegate_1<T>* parser,
                                                                       ::System::Net::Http::Headers::HttpHeaderKind headerKind, ::System::Func_2<::System::Object*, ::StringW>* toString);

  static inline ::System::Net::Http::Headers::HeaderInfo* New_ctor(::StringW name, ::System::Net::Http::Headers::HttpHeaderKind headerKind);

  /// @brief Method ToStringCollection, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* ToStringCollection(::System::Object* collection);

  /// @brief Method TryParse, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryParse(::StringW value, ::ByRef<::System::Object*> result);

  constexpr bool const& __cordl_internal_get_AllowsMany() const;

  constexpr bool& __cordl_internal_get_AllowsMany();

  constexpr ::System::Net::Http::Headers::HttpHeaderKind const& __cordl_internal_get_HeaderKind() const;

  constexpr ::System::Net::Http::Headers::HttpHeaderKind& __cordl_internal_get_HeaderKind();

  constexpr ::StringW const& __cordl_internal_get_Name() const;

  constexpr ::StringW& __cordl_internal_get_Name();

  constexpr ::System::Func_2<::System::Object*, ::StringW>* const& __cordl_internal_get__CustomToString_k__BackingField() const;

  constexpr ::System::Func_2<::System::Object*, ::StringW>*& __cordl_internal_get__CustomToString_k__BackingField();

  constexpr void __cordl_internal_set_AllowsMany(bool value);

  constexpr void __cordl_internal_set_HeaderKind(::System::Net::Http::Headers::HttpHeaderKind value);

  constexpr void __cordl_internal_set_Name(::StringW value);

  constexpr void __cordl_internal_set__CustomToString_k__BackingField(::System::Func_2<::System::Object*, ::StringW>* value);

  /// @brief Method .ctor, addr 0x421f61c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Net::Http::Headers::HttpHeaderKind headerKind);

  /// @brief Method get_CustomToString, addr 0x421f65c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_2<::System::Object*, ::StringW>* get_CustomToString();

  /// @brief Method get_Separator, addr 0x421f66c, size 0x38, virtual true, abstract: false, final false
  inline ::StringW get_Separator();

  /// @brief Method set_CustomToString, addr 0x421f664, size 0x8, virtual false, abstract: false, final false
  inline void set_CustomToString(::System::Func_2<::System::Object*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HeaderInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HeaderInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HeaderInfo(HeaderInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HeaderInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HeaderInfo(HeaderInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16717 };

  /// @brief Field AllowsMany, offset: 0x10, size: 0x1, def value: None
  bool ___AllowsMany;

  /// @brief Field HeaderKind, offset: 0x14, size: 0x4, def value: None
  ::System::Net::Http::Headers::HttpHeaderKind ___HeaderKind;

  /// @brief Field Name, offset: 0x18, size: 0x8, def value: None
  ::StringW ___Name;

  /// @brief Field <CustomToString>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Func_2<::System::Object*, ::StringW>* ____CustomToString_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::Headers::HeaderInfo, ___AllowsMany) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::HeaderInfo, ___HeaderKind) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::HeaderInfo, ___Name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::HeaderInfo, ____CustomToString_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::HeaderInfo, 0x28>, "Size mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::HeaderInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::HeaderInfo*, "System.Net.Http.Headers", "HeaderInfo");
