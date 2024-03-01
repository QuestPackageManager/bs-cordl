#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelMissionParser)
namespace GlobalNamespace {
class __LevelMissionParser__ParserFunction;
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
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelMissionParser;
}
namespace GlobalNamespace {
class __LevelMissionParser__ParserFunction;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelMissionParser);
MARK_REF_PTR_T(::GlobalNamespace::__LevelMissionParser__ParserFunction);
// Type: ::ParserFunction
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LevelMissionParser::ParserFunction*
class CORDL_TYPE __LevelMissionParser__ParserFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x12b75b8, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ArrayW<float_t, ::Array<float_t>*> functionParams, int32_t paramCount, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x12b764c, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x12b75a4, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::ArrayW<float_t, ::Array<float_t>*> functionParams, int32_t paramCount);

  static inline ::GlobalNamespace::__LevelMissionParser__ParserFunction* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x12b74cc, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelMissionParser__ParserFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LevelMissionParser__ParserFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LevelMissionParser__ParserFunction(__LevelMissionParser__ParserFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LevelMissionParser__ParserFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LevelMissionParser__ParserFunction(__LevelMissionParser__ParserFunction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelMissionParser__ParserFunction, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelMissionParser
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LevelMissionParser*
class CORDL_TYPE LevelMissionParser : public ::System::Object {
public:
  // Declarations
  using ParserFunction = ::GlobalNamespace::__LevelMissionParser__ParserFunction;

  /// @brief Field _functions, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__functions,
                      put = __cordl_internal_set__functions))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__LevelMissionParser__ParserFunction*>* _functions;

  /// @brief Method AddFunction, addr 0x12b6e8c, size 0x68, virtual false, abstract: false, final false
  inline void AddFunction(::StringW name, ::GlobalNamespace::__LevelMissionParser__ParserFunction* function);

  static inline ::GlobalNamespace::LevelMissionParser* New_ctor();

  /// @brief Method Parse, addr 0x12b6ef4, size 0x1c, virtual false, abstract: false, final false
  inline bool Parse(::StringW s);

  /// @brief Method Parse, addr 0x12b6f10, size 0x2c8, virtual false, abstract: false, final false
  inline bool Parse(::StringW s, int32_t start, int32_t length);

  /// @brief Method ParseFunction, addr 0x12b71d8, size 0x2f4, virtual false, abstract: false, final false
  inline bool ParseFunction(::StringW s, int32_t start, int32_t length);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__LevelMissionParser__ParserFunction*>*& __cordl_internal_get__functions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__LevelMissionParser__ParserFunction*>*> const&
  __cordl_internal_get__functions() const;

  constexpr void __cordl_internal_set__functions(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__LevelMissionParser__ParserFunction*>* value);

  /// @brief Method .ctor, addr 0x12b6e08, size 0x84, virtual false, abstract: false, final false
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

  /// @brief Field _functions, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__LevelMissionParser__ParserFunction*>* ____functions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelMissionParser, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelMissionParser, ____functions) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelMissionParser);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelMissionParser*, "", "LevelMissionParser");
NEED_NO_BOX(::GlobalNamespace::__LevelMissionParser__ParserFunction);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelMissionParser__ParserFunction*, "", "LevelMissionParser/ParserFunction");
