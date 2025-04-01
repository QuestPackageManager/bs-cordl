#pragma once
// IWYU pragma private; include "BGLib/JsonExtension/JsonFileHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonFileHandler)
namespace BGLib::JsonExtension {
template <typename T> class JsonFileHandler___c__DisplayClass0_0_1;
}
namespace Newtonsoft::Json {
class JsonSerializerSettings;
}
namespace Newtonsoft::Json {
class JsonTextWriter;
}
namespace System::IO {
class TextReader;
}
namespace System::IO {
class TextWriter;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace BGLib::JsonExtension {
class JsonFileHandler;
}
namespace BGLib::JsonExtension {
template <typename T> class JsonFileHandler___c__DisplayClass0_0_1;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::JsonExtension::JsonFileHandler);
MARK_GEN_REF_PTR_T(::BGLib::JsonExtension::JsonFileHandler___c__DisplayClass0_0_1);
// Dependencies System.Object
namespace BGLib::JsonExtension {
// cpp template
template <typename T>
// Is value type: false
// CS Name: BGLib.JsonExtension.JsonFileHandler/<>c__DisplayClass0_0`1<T>
class CORDL_TYPE JsonFileHandler___c__DisplayClass0_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field indentation, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_indentation, put = __cordl_internal_set_indentation)) int32_t indentation;

  static inline ::BGLib::JsonExtension::JsonFileHandler___c__DisplayClass0_0_1<T>* New_ctor();

  /// @brief Method <WriteIndentedWithDefault>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _WriteIndentedWithDefault_b__0(::Newtonsoft::Json::JsonTextWriter* writer);

  constexpr int32_t const& __cordl_internal_get_indentation() const;

  constexpr int32_t& __cordl_internal_get_indentation();

  constexpr void __cordl_internal_set_indentation(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonFileHandler___c__DisplayClass0_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonFileHandler___c__DisplayClass0_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonFileHandler___c__DisplayClass0_0_1(JsonFileHandler___c__DisplayClass0_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonFileHandler___c__DisplayClass0_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonFileHandler___c__DisplayClass0_0_1(JsonFileHandler___c__DisplayClass0_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19039 };

  /// @brief Field indentation, offset: 0x10, size: 0x4, def value: None
  int32_t ___indentation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGLib::JsonExtension
// Dependencies System.Object
namespace BGLib::JsonExtension {
// Is value type: false
// CS Name: BGLib.JsonExtension.JsonFileHandler
class CORDL_TYPE JsonFileHandler : public ::System::Object {
public:
  // Declarations
  template <typename T> using __c__DisplayClass0_0_1 = ::BGLib::JsonExtension::JsonFileHandler___c__DisplayClass0_0_1<T>;

  /// @brief Method ReadFromFile, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T ReadFromFile(::StringW filePath);

  /// @brief Method ReadFromFile, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T ReadFromFile(::StringW filePath, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method ReadFromText, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T ReadFromText(::System::IO::TextReader* textReader, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method WriteCompactWithoutDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void WriteCompactWithoutDefault(T content, ::StringW filePath);

  /// @brief Method WriteIndentedWithDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void WriteIndentedWithDefault(T content, ::StringW filePath, int32_t indentation);

  /// @brief Method WriteToFile, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline void WriteToFile(T content, ::StringW filePath, ::Newtonsoft::Json::JsonSerializerSettings* settings, ::System::Action_1<::Newtonsoft::Json::JsonTextWriter*>* beforeSerialize);

  /// @brief Method WriteToText, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline void WriteToText(::System::IO::TextWriter* writer, T content, ::Newtonsoft::Json::JsonSerializerSettings* settings,
                                 ::System::Action_1<::Newtonsoft::Json::JsonTextWriter*>* beforeSerialize);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonFileHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonFileHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonFileHandler(JsonFileHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonFileHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonFileHandler(JsonFileHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19040 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::JsonExtension::JsonFileHandler, 0x10>, "Size mismatch!");

} // namespace BGLib::JsonExtension
NEED_NO_BOX(::BGLib::JsonExtension::JsonFileHandler);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::JsonExtension::JsonFileHandler*, "BGLib.JsonExtension", "JsonFileHandler");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGLib::JsonExtension::JsonFileHandler___c__DisplayClass0_0_1, "BGLib.JsonExtension", "JsonFileHandler/<>c__DisplayClass0_0`1");
