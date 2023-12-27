#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Parser)
namespace System {
class Object;
}
namespace System::Net::Http::Headers {
class __Parser__Token;
}
namespace System::Net::Http::Headers {
class __Parser__Uri;
}
namespace System::Net::Http::Headers {
class __Parser__Int;
}
namespace System::Net::Http::Headers {
class __Parser__Host;
}
namespace System::Net::Http::Headers {
class __Parser__MD5;
}
namespace System::Net::Http::Headers {
class __Parser__DateTime;
}
namespace System::Net::Http::Headers {
class __Parser__Long;
}
namespace System::Net::Http::Headers {
class __Parser__EmailAddress;
}
namespace System::Net::Http::Headers {
class __Parser__TimeSpanSeconds;
}
namespace GlobalNamespace {
class __Parser__DateTime____c;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
struct DateTimeOffset;
}
namespace GlobalNamespace {
class __Parser__MD5____c;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace GlobalNamespace {
class __Parser__DateTime____c;
}
namespace GlobalNamespace {
class __Parser__MD5____c;
}
namespace System::Net::Http::Headers {
class Parser;
}
namespace System::Net::Http::Headers {
class __Parser__DateTime;
}
namespace System::Net::Http::Headers {
class __Parser__EmailAddress;
}
namespace System::Net::Http::Headers {
class __Parser__Host;
}
namespace System::Net::Http::Headers {
class __Parser__Int;
}
namespace System::Net::Http::Headers {
class __Parser__Long;
}
namespace System::Net::Http::Headers {
class __Parser__MD5;
}
namespace System::Net::Http::Headers {
class __Parser__TimeSpanSeconds;
}
namespace System::Net::Http::Headers {
class __Parser__Token;
}
namespace System::Net::Http::Headers {
class __Parser__Uri;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__Parser__DateTime____c);
MARK_REF_PTR_T(::GlobalNamespace::__Parser__MD5____c);
MARK_REF_PTR_T(::System::Net::Http::Headers::Parser);
MARK_REF_PTR_T(::System::Net::Http::Headers::__Parser__DateTime);
MARK_REF_PTR_T(::System::Net::Http::Headers::__Parser__EmailAddress);
MARK_REF_PTR_T(::System::Net::Http::Headers::__Parser__Host);
MARK_REF_PTR_T(::System::Net::Http::Headers::__Parser__Int);
MARK_REF_PTR_T(::System::Net::Http::Headers::__Parser__Long);
MARK_REF_PTR_T(::System::Net::Http::Headers::__Parser__MD5);
MARK_REF_PTR_T(::System::Net::Http::Headers::__Parser__TimeSpanSeconds);
MARK_REF_PTR_T(::System::Net::Http::Headers::__Parser__Token);
MARK_REF_PTR_T(::System::Net::Http::Headers::__Parser__Uri);
// Type: ::Token
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14689))
// CS Name: ::Parser::Token*
class CORDL_TYPE __Parser__Token : public ::System::Object {
public:
  // Declarations
  /// @brief Method Check addr 0x28334d4 size 0x10c virtual false final false
  static inline void Check(::StringW s);

  /// @brief Method TryCheck addr 0x283ba98 size 0x68 virtual false final false
  static inline bool TryCheck(::StringW s);

  // Ctor Parameters [CppParam { name: "", ty: "__Parser__Token", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Parser__Token(__Parser__Token&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Parser__Token", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Parser__Token(__Parser__Token const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Parser__Token();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::__Parser__Token, 0x10>, "Size mismatch!");

} // namespace System::Net::Http::Headers
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14690))
// CS Name: ::Parser::DateTime::<>c*
class CORDL_TYPE __Parser__DateTime____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__Parser__DateTime____c* __9;

  static inline void setStaticF___9(::GlobalNamespace::__Parser__DateTime____c* value);

  static inline ::GlobalNamespace::__Parser__DateTime____c* getStaticF___9();

  static inline ::GlobalNamespace::__Parser__DateTime____c* New_ctor();

  /// @brief Method .ctor addr 0x283ea48 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <.cctor>b__2_0 addr 0x283ea50 size 0xd8 virtual false final false
  inline ::StringW __cctor_b__2_0(::System::Object* l);

  // Ctor Parameters [CppParam { name: "", ty: "__Parser__DateTime____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Parser__DateTime____c(__Parser__DateTime____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Parser__DateTime____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Parser__DateTime____c(__Parser__DateTime____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Parser__DateTime____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Parser__DateTime____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::DateTime
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14691))
// CS Name: ::Parser::DateTime*
class CORDL_TYPE __Parser__DateTime : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__Parser__DateTime____c;

  /// @brief Field ToString, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ToString, put = setStaticF_ToString))::System::Func_2<::System::Object*, ::StringW>* ToString;

  static inline void setStaticF_ToString(::System::Func_2<::System::Object*, ::StringW>* value);

  static inline ::System::Func_2<::System::Object*, ::StringW>* getStaticF_ToString();

  /// @brief Method TryParse addr 0x283e8bc size 0x64 virtual false final false
  static inline bool TryParse(::StringW input, ByRef<::System::DateTimeOffset> result);

  // Ctor Parameters [CppParam { name: "", ty: "__Parser__DateTime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Parser__DateTime(__Parser__DateTime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Parser__DateTime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Parser__DateTime(__Parser__DateTime const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Parser__DateTime();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::__Parser__DateTime, 0x10>, "Size mismatch!");

} // namespace System::Net::Http::Headers
// Type: ::EmailAddress
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14692))
// CS Name: ::Parser::EmailAddress*
class CORDL_TYPE __Parser__EmailAddress : public ::System::Object {
public:
  // Declarations
  /// @brief Method TryParse addr 0x283eb28 size 0xe8 virtual false final false
  static inline bool TryParse(::StringW input, ByRef<::StringW> result);

  // Ctor Parameters [CppParam { name: "", ty: "__Parser__EmailAddress", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Parser__EmailAddress(__Parser__EmailAddress&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Parser__EmailAddress", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Parser__EmailAddress(__Parser__EmailAddress const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Parser__EmailAddress();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::__Parser__EmailAddress, 0x10>, "Size mismatch!");

} // namespace System::Net::Http::Headers
// Type: ::Host
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14693))
// CS Name: ::Parser::Host*
class CORDL_TYPE __Parser__Host : public ::System::Object {
public:
  // Declarations
  /// @brief Method TryParse addr 0x283ec10 size 0xc8 virtual false final false
  static inline bool TryParse(::StringW input, ByRef<::StringW> result);

  // Ctor Parameters [CppParam { name: "", ty: "__Parser__Host", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Parser__Host(__Parser__Host&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Parser__Host", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Parser__Host(__Parser__Host const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Parser__Host();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::__Parser__Host, 0x10>, "Size mismatch!");

} // namespace System::Net::Http::Headers
// Type: ::Int
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14694))
// CS Name: ::Parser::Int*
class CORDL_TYPE __Parser__Int : public ::System::Object {
public:
  // Declarations
  /// @brief Method TryParse addr 0x283ecd8 size 0x78 virtual false final false
  static inline bool TryParse(::StringW input, ByRef<int32_t> result);

  // Ctor Parameters [CppParam { name: "", ty: "__Parser__Int", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Parser__Int(__Parser__Int&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Parser__Int", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Parser__Int(__Parser__Int const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Parser__Int();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::__Parser__Int, 0x10>, "Size mismatch!");

} // namespace System::Net::Http::Headers
// Type: ::Long
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14695))
// CS Name: ::Parser::Long*
class CORDL_TYPE __Parser__Long : public ::System::Object {
public:
  // Declarations
  /// @brief Method TryParse addr 0x283ed50 size 0x78 virtual false final false
  static inline bool TryParse(::StringW input, ByRef<int64_t> result);

  // Ctor Parameters [CppParam { name: "", ty: "__Parser__Long", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Parser__Long(__Parser__Long&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Parser__Long", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Parser__Long(__Parser__Long const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Parser__Long();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::__Parser__Long, 0x10>, "Size mismatch!");

} // namespace System::Net::Http::Headers
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14696))
// CS Name: ::Parser::MD5::<>c*
class CORDL_TYPE __Parser__MD5____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__Parser__MD5____c* __9;

  static inline void setStaticF___9(::GlobalNamespace::__Parser__MD5____c* value);

  static inline ::GlobalNamespace::__Parser__MD5____c* getStaticF___9();

  static inline ::GlobalNamespace::__Parser__MD5____c* New_ctor();

  /// @brief Method .ctor addr 0x283efe0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <.cctor>b__2_0 addr 0x283efe8 size 0x94 virtual false final false
  inline ::StringW __cctor_b__2_0(::System::Object* l);

  // Ctor Parameters [CppParam { name: "", ty: "__Parser__MD5____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Parser__MD5____c(__Parser__MD5____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Parser__MD5____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Parser__MD5____c(__Parser__MD5____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Parser__MD5____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Parser__MD5____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MD5
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14697))
// CS Name: ::Parser::MD5*
class CORDL_TYPE __Parser__MD5 : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__Parser__MD5____c;

  /// @brief Field ToString, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ToString, put = setStaticF_ToString))::System::Func_2<::System::Object*, ::StringW>* ToString;

  static inline void setStaticF_ToString(::System::Func_2<::System::Object*, ::StringW>* value);

  static inline ::System::Func_2<::System::Object*, ::StringW>* getStaticF_ToString();

  /// @brief Method TryParse addr 0x283edc8 size 0xf0 virtual false final false
  static inline bool TryParse(::StringW input, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> result);

  // Ctor Parameters [CppParam { name: "", ty: "__Parser__MD5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Parser__MD5(__Parser__MD5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Parser__MD5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Parser__MD5(__Parser__MD5 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Parser__MD5();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::__Parser__MD5, 0x10>, "Size mismatch!");

} // namespace System::Net::Http::Headers
// Type: ::TimeSpanSeconds
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14698))
// CS Name: ::Parser::TimeSpanSeconds*
class CORDL_TYPE __Parser__TimeSpanSeconds : public ::System::Object {
public:
  // Declarations
  /// @brief Method TryParse addr 0x283f07c size 0xb0 virtual false final false
  static inline bool TryParse(::StringW input, ByRef<::System::TimeSpan> result);

  // Ctor Parameters [CppParam { name: "", ty: "__Parser__TimeSpanSeconds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Parser__TimeSpanSeconds(__Parser__TimeSpanSeconds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Parser__TimeSpanSeconds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Parser__TimeSpanSeconds(__Parser__TimeSpanSeconds const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Parser__TimeSpanSeconds();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::__Parser__TimeSpanSeconds, 0x10>, "Size mismatch!");

} // namespace System::Net::Http::Headers
// Type: ::Uri
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14699))
// CS Name: ::Parser::Uri*
class CORDL_TYPE __Parser__Uri : public ::System::Object {
public:
  // Declarations
  /// @brief Method TryParse addr 0x283f12c size 0x6c virtual false final false
  static inline bool TryParse(::StringW input, ByRef<::System::Uri*> result);

  // Ctor Parameters [CppParam { name: "", ty: "__Parser__Uri", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Parser__Uri(__Parser__Uri&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Parser__Uri", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Parser__Uri(__Parser__Uri const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Parser__Uri();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::__Parser__Uri, 0x10>, "Size mismatch!");

} // namespace System::Net::Http::Headers
// Type: System.Net.Http.Headers::Parser
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14700))
// CS Name: ::System.Net.Http.Headers::Parser*
class CORDL_TYPE Parser : public ::System::Object {
public:
  // Declarations
  using Uri = ::System::Net::Http::Headers::__Parser__Uri;

  using TimeSpanSeconds = ::System::Net::Http::Headers::__Parser__TimeSpanSeconds;

  using MD5 = ::System::Net::Http::Headers::__Parser__MD5;

  using Long = ::System::Net::Http::Headers::__Parser__Long;

  using Int = ::System::Net::Http::Headers::__Parser__Int;

  using Host = ::System::Net::Http::Headers::__Parser__Host;

  using EmailAddress = ::System::Net::Http::Headers::__Parser__EmailAddress;

  using DateTime = ::System::Net::Http::Headers::__Parser__DateTime;

  using Token = ::System::Net::Http::Headers::__Parser__Token;

  // Ctor Parameters [CppParam { name: "", ty: "Parser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Parser(Parser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Parser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Parser(Parser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Parser();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::Parser, 0x10>, "Size mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::GlobalNamespace::__Parser__DateTime____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Parser__DateTime____c*, "System.Net.Http.Headers", "Parser/DateTime/<>c");
NEED_NO_BOX(::GlobalNamespace::__Parser__MD5____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Parser__MD5____c*, "System.Net.Http.Headers", "Parser/MD5/<>c");
NEED_NO_BOX(::System::Net::Http::Headers::Parser);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::Parser*, "System.Net.Http.Headers", "Parser");
NEED_NO_BOX(::System::Net::Http::Headers::__Parser__DateTime);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::__Parser__DateTime*, "System.Net.Http.Headers", "Parser/DateTime");
NEED_NO_BOX(::System::Net::Http::Headers::__Parser__EmailAddress);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::__Parser__EmailAddress*, "System.Net.Http.Headers", "Parser/EmailAddress");
NEED_NO_BOX(::System::Net::Http::Headers::__Parser__Host);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::__Parser__Host*, "System.Net.Http.Headers", "Parser/Host");
NEED_NO_BOX(::System::Net::Http::Headers::__Parser__Int);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::__Parser__Int*, "System.Net.Http.Headers", "Parser/Int");
NEED_NO_BOX(::System::Net::Http::Headers::__Parser__Long);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::__Parser__Long*, "System.Net.Http.Headers", "Parser/Long");
NEED_NO_BOX(::System::Net::Http::Headers::__Parser__MD5);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::__Parser__MD5*, "System.Net.Http.Headers", "Parser/MD5");
NEED_NO_BOX(::System::Net::Http::Headers::__Parser__TimeSpanSeconds);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::__Parser__TimeSpanSeconds*, "System.Net.Http.Headers", "Parser/TimeSpanSeconds");
NEED_NO_BOX(::System::Net::Http::Headers::__Parser__Token);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::__Parser__Token*, "System.Net.Http.Headers", "Parser/Token");
NEED_NO_BOX(::System::Net::Http::Headers::__Parser__Uri);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::__Parser__Uri*, "System.Net.Http.Headers", "Parser/Uri");
