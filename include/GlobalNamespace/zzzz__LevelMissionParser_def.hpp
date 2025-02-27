#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelMissionParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelMissionParser)
namespace GlobalNamespace {
class LevelMissionParser_ParserFunction;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelMissionParser;
}
namespace GlobalNamespace {
class LevelMissionParser_ParserFunction;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelMissionParser);
MARK_REF_PTR_T(::GlobalNamespace::LevelMissionParser_ParserFunction);
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelMissionParser/ParserFunction
class CORDL_TYPE LevelMissionParser_ParserFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x26ba0c4, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ArrayW<float_t, ::Array<float_t>*> functionParams, int32_t paramCount, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x26ba158, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x26ba0b0, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::ArrayW<float_t, ::Array<float_t>*> functionParams, int32_t paramCount);

  static inline ::GlobalNamespace::LevelMissionParser_ParserFunction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x26ba010, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelMissionParser_ParserFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelMissionParser_ParserFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelMissionParser_ParserFunction(LevelMissionParser_ParserFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelMissionParser_ParserFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelMissionParser_ParserFunction(LevelMissionParser_ParserFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12866 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelMissionParser_ParserFunction, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelMissionParser
class CORDL_TYPE LevelMissionParser : public ::System::Object {
public:
  // Declarations
  using ParserFunction = ::GlobalNamespace::LevelMissionParser_ParserFunction;

  /// @brief Field _functions, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__functions,
                      put = __cordl_internal_set__functions)) ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::LevelMissionParser_ParserFunction*>* _functions;

  /// @brief Method AddFunction, addr 0x26b9a1c, size 0x68, virtual false, abstract: false, final false
  inline void AddFunction(::StringW name, ::GlobalNamespace::LevelMissionParser_ParserFunction* function);

  static inline ::GlobalNamespace::LevelMissionParser* New_ctor();

  /// @brief Method Parse, addr 0x26b9a84, size 0x1c, virtual false, abstract: false, final false
  inline bool Parse(::StringW s);

  /// @brief Method Parse, addr 0x26b9aa0, size 0x27c, virtual false, abstract: false, final false
  inline bool Parse(::StringW s, int32_t start, int32_t length);

  /// @brief Method ParseFunction, addr 0x26b9d1c, size 0x2f4, virtual false, abstract: false, final false
  inline bool ParseFunction(::StringW s, int32_t start, int32_t length);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::LevelMissionParser_ParserFunction*>* const& __cordl_internal_get__functions() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::LevelMissionParser_ParserFunction*>*& __cordl_internal_get__functions();

  constexpr void __cordl_internal_set__functions(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::LevelMissionParser_ParserFunction*>* value);

  /// @brief Method .ctor, addr 0x26b9998, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelMissionParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelMissionParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelMissionParser(LevelMissionParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelMissionParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelMissionParser(LevelMissionParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12867 };

  /// @brief Field _functions, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::LevelMissionParser_ParserFunction*>* ____functions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelMissionParser, ____functions) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelMissionParser, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelMissionParser);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelMissionParser*, "", "LevelMissionParser");
NEED_NO_BOX(::GlobalNamespace::LevelMissionParser_ParserFunction);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelMissionParser_ParserFunction*, "", "LevelMissionParser/ParserFunction");
