#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JTokenReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__IJsonLineInfo_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JTokenReader)
namespace Newtonsoft::Json::Linq {
class JContainer;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JTokenReader;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JTokenReader);
// Dependencies Newtonsoft.Json.IJsonLineInfo, Newtonsoft.Json.JsonReader
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JTokenReader
class CORDL_TYPE JTokenReader : public ::Newtonsoft::Json::JsonReader {
public:
  // Declarations
  __declspec(property(get = get_CurrentToken)) ::Newtonsoft::Json::Linq::JToken* CurrentToken;

  __declspec(property(get = Newtonsoft_Json_IJsonLineInfo_get_LineNumber)) int32_t Newtonsoft_Json_IJsonLineInfo_LineNumber;

  __declspec(property(get = Newtonsoft_Json_IJsonLineInfo_get_LinePosition)) int32_t Newtonsoft_Json_IJsonLineInfo_LinePosition;

  __declspec(property(get = get_Path)) ::StringW Path;

  /// @brief Field _current, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__current, put = __cordl_internal_set__current)) ::Newtonsoft::Json::Linq::JToken* _current;

  /// @brief Field _initialPath, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__initialPath, put = __cordl_internal_set__initialPath)) ::StringW _initialPath;

  /// @brief Field _parent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__parent, put = __cordl_internal_set__parent)) ::Newtonsoft::Json::Linq::JToken* _parent;

  /// @brief Field _root, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__root, put = __cordl_internal_set__root)) ::Newtonsoft::Json::Linq::JToken* _root;

  /// @brief Convert operator to "::Newtonsoft::Json::IJsonLineInfo"
  constexpr operator ::Newtonsoft::Json::IJsonLineInfo*() noexcept;

  /// @brief Method GetEndToken, addr 0x3f2ae4c, size 0x158, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::Newtonsoft::Json::JsonToken> GetEndToken(::Newtonsoft::Json::Linq::JContainer* c);

  static inline ::Newtonsoft::Json::Linq::JTokenReader* New_ctor(::Newtonsoft::Json::Linq::JToken* token);

  static inline ::Newtonsoft::Json::Linq::JTokenReader* New_ctor(::Newtonsoft::Json::Linq::JToken* token, ::StringW initialPath);

  /// @brief Method Newtonsoft.Json.IJsonLineInfo.HasLineInfo, addr 0x3f2afc4, size 0xb4, virtual true, abstract: false, final true
  inline bool Newtonsoft_Json_IJsonLineInfo_HasLineInfo();

  /// @brief Method Newtonsoft.Json.IJsonLineInfo.get_LineNumber, addr 0x3f2b078, size 0xb8, virtual true, abstract: false, final true
  inline int32_t Newtonsoft_Json_IJsonLineInfo_get_LineNumber();

  /// @brief Method Newtonsoft.Json.IJsonLineInfo.get_LinePosition, addr 0x3f2b130, size 0xb8, virtual true, abstract: false, final true
  inline int32_t Newtonsoft_Json_IJsonLineInfo_get_LinePosition();

  /// @brief Method Read, addr 0x3f2a5c0, size 0xd0, virtual true, abstract: false, final false
  inline bool Read();

  /// @brief Method ReadInto, addr 0x3f2a690, size 0x68, virtual false, abstract: false, final false
  inline bool ReadInto(::Newtonsoft::Json::Linq::JContainer* c);

  /// @brief Method ReadOver, addr 0x3f2a6f8, size 0xb4, virtual false, abstract: false, final false
  inline bool ReadOver(::Newtonsoft::Json::Linq::JToken* t);

  /// @brief Method ReadToEnd, addr 0x3f2ada8, size 0x20, virtual false, abstract: false, final false
  inline bool ReadToEnd();

  /// @brief Method SafeToString, addr 0x3f2afa4, size 0x20, virtual false, abstract: false, final false
  inline ::StringW SafeToString(::System::Object* value);

  /// @brief Method SetEnd, addr 0x3f2adc8, size 0x84, virtual false, abstract: false, final false
  inline bool SetEnd(::Newtonsoft::Json::Linq::JContainer* c);

  /// @brief Method SetToken, addr 0x3f2a7ac, size 0x5fc, virtual false, abstract: false, final false
  inline void SetToken(::Newtonsoft::Json::Linq::JToken* token);

  constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get__current() const;

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__current();

  constexpr ::StringW const& __cordl_internal_get__initialPath() const;

  constexpr ::StringW& __cordl_internal_get__initialPath();

  constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get__parent() const;

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__parent();

  constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get__root() const;

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__root();

  constexpr void __cordl_internal_set__current(::Newtonsoft::Json::Linq::JToken* value);

  constexpr void __cordl_internal_set__initialPath(::StringW value);

  constexpr void __cordl_internal_set__parent(::Newtonsoft::Json::Linq::JToken* value);

  constexpr void __cordl_internal_set__root(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method .ctor, addr 0x3f2a530, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Linq::JToken* token);

  /// @brief Method .ctor, addr 0x3f2a59c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Linq::JToken* token, ::StringW initialPath);

  /// @brief Method get_CurrentToken, addr 0x3f2a528, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* get_CurrentToken();

  /// @brief Method get_Path, addr 0x3f2b1e8, size 0xe8, virtual true, abstract: false, final false
  inline ::StringW get_Path();

  /// @brief Convert to "::Newtonsoft::Json::IJsonLineInfo"
  constexpr ::Newtonsoft::Json::IJsonLineInfo* i___Newtonsoft__Json__IJsonLineInfo() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JTokenReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JTokenReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JTokenReader(JTokenReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JTokenReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JTokenReader(JTokenReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10430 };

  /// @brief Field _root, offset: 0x78, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* ____root;

  /// @brief Field _initialPath, offset: 0x80, size: 0x8, def value: None
  ::StringW ____initialPath;

  /// @brief Field _parent, offset: 0x88, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* ____parent;

  /// @brief Field _current, offset: 0x90, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* ____current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JTokenReader, ____root) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JTokenReader, ____initialPath) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JTokenReader, ____parent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JTokenReader, ____current) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JTokenReader, 0x98>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JTokenReader);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JTokenReader*, "Newtonsoft.Json.Linq", "JTokenReader");
