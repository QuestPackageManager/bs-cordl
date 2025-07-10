#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/Parser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Parser)
namespace System::Net::Http::Headers {
class DateTime_Parser___c;
}
namespace System::Net::Http::Headers {
class MD5_Parser___c;
}
namespace System::Net::Http::Headers {
class Parser_DateTime;
}
namespace System::Net::Http::Headers {
class Parser_EmailAddress;
}
namespace System::Net::Http::Headers {
class Parser_Host;
}
namespace System::Net::Http::Headers {
class Parser_Int;
}
namespace System::Net::Http::Headers {
class Parser_Long;
}
namespace System::Net::Http::Headers {
class Parser_MD5;
}
namespace System::Net::Http::Headers {
class Parser_TimeSpanSeconds;
}
namespace System::Net::Http::Headers {
class Parser_Token;
}
namespace System::Net::Http::Headers {
class Parser_Uri;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class DateTime_Parser___c;
}
namespace System::Net::Http::Headers {
class MD5_Parser___c;
}
namespace System::Net::Http::Headers {
class Parser;
}
namespace System::Net::Http::Headers {
class Parser_DateTime;
}
namespace System::Net::Http::Headers {
class Parser_EmailAddress;
}
namespace System::Net::Http::Headers {
class Parser_Host;
}
namespace System::Net::Http::Headers {
class Parser_Int;
}
namespace System::Net::Http::Headers {
class Parser_Long;
}
namespace System::Net::Http::Headers {
class Parser_MD5;
}
namespace System::Net::Http::Headers {
class Parser_TimeSpanSeconds;
}
namespace System::Net::Http::Headers {
class Parser_Token;
}
namespace System::Net::Http::Headers {
class Parser_Uri;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::DateTime_Parser___c);
MARK_REF_PTR_T(::System::Net::Http::Headers::MD5_Parser___c);
MARK_REF_PTR_T(::System::Net::Http::Headers::Parser);
MARK_REF_PTR_T(::System::Net::Http::Headers::Parser_DateTime);
MARK_REF_PTR_T(::System::Net::Http::Headers::Parser_EmailAddress);
MARK_REF_PTR_T(::System::Net::Http::Headers::Parser_Host);
MARK_REF_PTR_T(::System::Net::Http::Headers::Parser_Int);
MARK_REF_PTR_T(::System::Net::Http::Headers::Parser_Long);
MARK_REF_PTR_T(::System::Net::Http::Headers::Parser_MD5);
MARK_REF_PTR_T(::System::Net::Http::Headers::Parser_TimeSpanSeconds);
MARK_REF_PTR_T(::System::Net::Http::Headers::Parser_Token);
MARK_REF_PTR_T(::System::Net::Http::Headers::Parser_Uri);
// Dependencies System.Object
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: System.Net.Http.Headers.Parser/Token
class CORDL_TYPE Parser_Token : public ::System::Object {
public:
  // Declarations
  /// @brief Method Check, addr 0x4219a30, size 0xf4, virtual false, abstract: false, final false
  static inline void Check(::StringW s);

  /// @brief Method TryCheck, addr 0x4222098, size 0x68, virtual false, abstract: false, final false
  static inline bool TryCheck(::StringW s);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Parser_Token();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Parser_Token", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Parser_Token(Parser_Token&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Parser_Token", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Parser_Token(Parser_Token const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16735 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::Parser_Token, 0x10>, "Size mismatch!");

} // namespace System::Net::Http::Headers
// Dependencies System.Object
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: System.Net.Http.Headers.Parser/DateTime/<>c
class CORDL_TYPE DateTime_Parser___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Net::Http::Headers::DateTime_Parser___c* __9;

  static inline ::System::Net::Http::Headers::DateTime_Parser___c* New_ctor();

  /// @brief Method <.cctor>b__2_0, addr 0x4224fb4, size 0xf0, virtual false, abstract: false, final false
  inline ::StringW __cctor_b__2_0(::System::Object* l);

  /// @brief Method .ctor, addr 0x4224fac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Net::Http::Headers::DateTime_Parser___c* getStaticF___9();

  static inline void setStaticF___9(::System::Net::Http::Headers::DateTime_Parser___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTime_Parser___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DateTime_Parser___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateTime_Parser___c(DateTime_Parser___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateTime_Parser___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateTime_Parser___c(DateTime_Parser___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16736 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::DateTime_Parser___c, 0x10>, "Size mismatch!");

} // namespace System::Net::Http::Headers
// Dependencies System.Object
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: System.Net.Http.Headers.Parser/DateTime
class CORDL_TYPE Parser_DateTime : public ::System::Object {
public:
  // Declarations
  using __c = ::System::Net::Http::Headers::DateTime_Parser___c;

  /// @brief Field ToString, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ToString, put = setStaticF_ToString)) ::System::Func_2<::System::Object*, ::StringW>* ToString;

  /// @brief Method TryParse, addr 0x4224e28, size 0x64, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, ::ByRef<::System::DateTimeOffset> result);

  static inline ::System::Func_2<::System::Object*, ::StringW>* getStaticF_ToString();

  static inline void setStaticF_ToString(::System::Func_2<::System::Object*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Parser_DateTime();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Parser_DateTime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Parser_DateTime(Parser_DateTime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Parser_DateTime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Parser_DateTime(Parser_DateTime const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16737 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::Parser_DateTime, 0x10>, "Size mismatch!");

} // namespace System::Net::Http::Headers
// Dependencies System.Object
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: System.Net.Http.Headers.Parser/EmailAddress
class CORDL_TYPE Parser_EmailAddress : public ::System::Object {
public:
  // Declarations
  /// @brief Method TryParse, addr 0x42250a4, size 0xe0, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, ::ByRef<::StringW> result);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Parser_EmailAddress();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Parser_EmailAddress", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Parser_EmailAddress(Parser_EmailAddress&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Parser_EmailAddress", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Parser_EmailAddress(Parser_EmailAddress const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16738 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::Parser_EmailAddress, 0x10>, "Size mismatch!");

} // namespace System::Net::Http::Headers
// Dependencies System.Object
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: System.Net.Http.Headers.Parser/Host
class CORDL_TYPE Parser_Host : public ::System::Object {
public:
  // Declarations
  /// @brief Method TryParse, addr 0x4225184, size 0xc8, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, ::ByRef<::StringW> result);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Parser_Host();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Parser_Host", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Parser_Host(Parser_Host&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Parser_Host", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Parser_Host(Parser_Host const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16739 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::Parser_Host, 0x10>, "Size mismatch!");

} // namespace System::Net::Http::Headers
// Dependencies System.Object
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: System.Net.Http.Headers.Parser/Int
class CORDL_TYPE Parser_Int : public ::System::Object {
public:
  // Declarations
  /// @brief Method TryParse, addr 0x422524c, size 0x78, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, ::ByRef<int32_t> result);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Parser_Int();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Parser_Int", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Parser_Int(Parser_Int&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Parser_Int", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Parser_Int(Parser_Int const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16740 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::Parser_Int, 0x10>, "Size mismatch!");

} // namespace System::Net::Http::Headers
// Dependencies System.Object
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: System.Net.Http.Headers.Parser/Long
class CORDL_TYPE Parser_Long : public ::System::Object {
public:
  // Declarations
  /// @brief Method TryParse, addr 0x42252c4, size 0x78, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, ::ByRef<int64_t> result);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Parser_Long();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Parser_Long", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Parser_Long(Parser_Long&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Parser_Long", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Parser_Long(Parser_Long const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16741 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::Parser_Long, 0x10>, "Size mismatch!");

} // namespace System::Net::Http::Headers
// Dependencies System.Object
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: System.Net.Http.Headers.Parser/MD5/<>c
class CORDL_TYPE MD5_Parser___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Net::Http::Headers::MD5_Parser___c* __9;

  static inline ::System::Net::Http::Headers::MD5_Parser___c* New_ctor();

  /// @brief Method <.cctor>b__2_0, addr 0x4225554, size 0x94, virtual false, abstract: false, final false
  inline ::StringW __cctor_b__2_0(::System::Object* l);

  /// @brief Method .ctor, addr 0x422554c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Net::Http::Headers::MD5_Parser___c* getStaticF___9();

  static inline void setStaticF___9(::System::Net::Http::Headers::MD5_Parser___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MD5_Parser___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MD5_Parser___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MD5_Parser___c(MD5_Parser___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MD5_Parser___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MD5_Parser___c(MD5_Parser___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16742 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::MD5_Parser___c, 0x10>, "Size mismatch!");

} // namespace System::Net::Http::Headers
// Dependencies System.Object
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: System.Net.Http.Headers.Parser/MD5
class CORDL_TYPE Parser_MD5 : public ::System::Object {
public:
  // Declarations
  using __c = ::System::Net::Http::Headers::MD5_Parser___c;

  /// @brief Field ToString, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ToString, put = setStaticF_ToString)) ::System::Func_2<::System::Object*, ::StringW>* ToString;

  /// @brief Method TryParse, addr 0x422533c, size 0xf0, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> result);

  static inline ::System::Func_2<::System::Object*, ::StringW>* getStaticF_ToString();

  static inline void setStaticF_ToString(::System::Func_2<::System::Object*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Parser_MD5();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Parser_MD5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Parser_MD5(Parser_MD5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Parser_MD5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Parser_MD5(Parser_MD5 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16743 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::Parser_MD5, 0x10>, "Size mismatch!");

} // namespace System::Net::Http::Headers
// Dependencies System.Object
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: System.Net.Http.Headers.Parser/TimeSpanSeconds
class CORDL_TYPE Parser_TimeSpanSeconds : public ::System::Object {
public:
  // Declarations
  /// @brief Method TryParse, addr 0x42255e8, size 0xb0, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, ::ByRef<::System::TimeSpan> result);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Parser_TimeSpanSeconds();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Parser_TimeSpanSeconds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Parser_TimeSpanSeconds(Parser_TimeSpanSeconds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Parser_TimeSpanSeconds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Parser_TimeSpanSeconds(Parser_TimeSpanSeconds const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16744 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::Parser_TimeSpanSeconds, 0x10>, "Size mismatch!");

} // namespace System::Net::Http::Headers
// Dependencies System.Object
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: System.Net.Http.Headers.Parser/Uri
class CORDL_TYPE Parser_Uri : public ::System::Object {
public:
  // Declarations
  /// @brief Method TryParse, addr 0x4225698, size 0x6c, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, ::ByRef<::System::Uri*> result);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Parser_Uri();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Parser_Uri", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Parser_Uri(Parser_Uri&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Parser_Uri", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Parser_Uri(Parser_Uri const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16745 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::Parser_Uri, 0x10>, "Size mismatch!");

} // namespace System::Net::Http::Headers
// Dependencies System.Object
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: System.Net.Http.Headers.Parser
class CORDL_TYPE Parser : public ::System::Object {
public:
  // Declarations
  using DateTime = ::System::Net::Http::Headers::Parser_DateTime;

  using EmailAddress = ::System::Net::Http::Headers::Parser_EmailAddress;

  using Host = ::System::Net::Http::Headers::Parser_Host;

  using Int = ::System::Net::Http::Headers::Parser_Int;

  using Long = ::System::Net::Http::Headers::Parser_Long;

  using MD5 = ::System::Net::Http::Headers::Parser_MD5;

  using TimeSpanSeconds = ::System::Net::Http::Headers::Parser_TimeSpanSeconds;

  using Token = ::System::Net::Http::Headers::Parser_Token;

  using Uri = ::System::Net::Http::Headers::Parser_Uri;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Parser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Parser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Parser(Parser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Parser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Parser(Parser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16746 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::Parser, 0x10>, "Size mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::DateTime_Parser___c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::DateTime_Parser___c*, "System.Net.Http.Headers", "Parser/DateTime/<>c");
NEED_NO_BOX(::System::Net::Http::Headers::MD5_Parser___c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::MD5_Parser___c*, "System.Net.Http.Headers", "Parser/MD5/<>c");
NEED_NO_BOX(::System::Net::Http::Headers::Parser);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::Parser*, "System.Net.Http.Headers", "Parser");
NEED_NO_BOX(::System::Net::Http::Headers::Parser_DateTime);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::Parser_DateTime*, "System.Net.Http.Headers", "Parser/DateTime");
NEED_NO_BOX(::System::Net::Http::Headers::Parser_EmailAddress);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::Parser_EmailAddress*, "System.Net.Http.Headers", "Parser/EmailAddress");
NEED_NO_BOX(::System::Net::Http::Headers::Parser_Host);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::Parser_Host*, "System.Net.Http.Headers", "Parser/Host");
NEED_NO_BOX(::System::Net::Http::Headers::Parser_Int);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::Parser_Int*, "System.Net.Http.Headers", "Parser/Int");
NEED_NO_BOX(::System::Net::Http::Headers::Parser_Long);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::Parser_Long*, "System.Net.Http.Headers", "Parser/Long");
NEED_NO_BOX(::System::Net::Http::Headers::Parser_MD5);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::Parser_MD5*, "System.Net.Http.Headers", "Parser/MD5");
NEED_NO_BOX(::System::Net::Http::Headers::Parser_TimeSpanSeconds);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::Parser_TimeSpanSeconds*, "System.Net.Http.Headers", "Parser/TimeSpanSeconds");
NEED_NO_BOX(::System::Net::Http::Headers::Parser_Token);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::Parser_Token*, "System.Net.Http.Headers", "Parser/Token");
NEED_NO_BOX(::System::Net::Http::Headers::Parser_Uri);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::Parser_Uri*, "System.Net.Http.Headers", "Parser/Uri");
