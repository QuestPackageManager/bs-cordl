#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__FormattableString_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FormattableStringFactory)
namespace System::Runtime::CompilerServices {
class __FormattableStringFactory__ConcreteFormattableString;
}
namespace System {
class Object;
}
namespace System {
class FormattableString;
}
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class FormattableStringFactory;
}
namespace System::Runtime::CompilerServices {
class __FormattableStringFactory__ConcreteFormattableString;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::FormattableStringFactory);
MARK_REF_PTR_T(::System::Runtime::CompilerServices::__FormattableStringFactory__ConcreteFormattableString);
// Type: ::ConcreteFormattableString
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2383))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3370))
// CS Name: ::FormattableStringFactory::ConcreteFormattableString*
class CORDL_TYPE __FormattableStringFactory__ConcreteFormattableString : public ::System::FormattableString {
public:
  // Declarations
  /// @brief Field _format, offset 0x10, size 0x8
  __declspec(property(get = __get__format, put = __set__format))::StringW _format;

  /// @brief Field _arguments, offset 0x18, size 0x8
  __declspec(property(get = __get__arguments, put = __set__arguments))::ArrayW<::System::Object*, ::Array<::System::Object*>*> _arguments;

  __declspec(property(get = get_Format))::StringW Format;

  __declspec(property(get = get_ArgumentCount)) int32_t ArgumentCount;

  constexpr ::StringW& __get__format();

  constexpr ::StringW const& __get__format() const;

  constexpr void __set__format(::StringW value);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __get__arguments();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __get__arguments() const;

  constexpr void __set__arguments(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  static inline ::System::Runtime::CompilerServices::__FormattableStringFactory__ConcreteFormattableString* New_ctor(::StringW format,
                                                                                                                     ::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments);

  /// @brief Method .ctor addr 0x24db164 size 0x2c virtual false final false
  inline void _ctor(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments);

  /// @brief Method get_Format addr 0x24db190 size 0x8 virtual true final false
  inline ::StringW get_Format();

  /// @brief Method GetArguments addr 0x24db198 size 0x8 virtual true final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetArguments();

  /// @brief Method get_ArgumentCount addr 0x24db1a0 size 0x1c virtual true final false
  inline int32_t get_ArgumentCount();

  /// @brief Method GetArgument addr 0x24db1bc size 0x30 virtual true final false
  inline ::System::Object* GetArgument(int32_t index);

  /// @brief Method ToString addr 0x24db1ec size 0x14 virtual true final false
  inline ::StringW ToString(::System::IFormatProvider* formatProvider);

  // Ctor Parameters [CppParam { name: "", ty: "__FormattableStringFactory__ConcreteFormattableString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FormattableStringFactory__ConcreteFormattableString(__FormattableStringFactory__ConcreteFormattableString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FormattableStringFactory__ConcreteFormattableString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FormattableStringFactory__ConcreteFormattableString(__FormattableStringFactory__ConcreteFormattableString const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FormattableStringFactory__ConcreteFormattableString();

public:
  /// @brief Field _format, offset: 0x10, size: 0x8, def value: None
  ::StringW ____format;

  /// @brief Field _arguments, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____arguments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::__FormattableStringFactory__ConcreteFormattableString, 0x20>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::FormattableStringFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3371))
// CS Name: ::System.Runtime.CompilerServices::FormattableStringFactory*
class CORDL_TYPE FormattableStringFactory : public ::System::Object {
public:
  // Declarations
  using ConcreteFormattableString = ::System::Runtime::CompilerServices::__FormattableStringFactory__ConcreteFormattableString;

  /// @brief Method Create addr 0x24db084 size 0xe0 virtual false final false
  static inline ::System::FormattableString* Create(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments);

  // Ctor Parameters [CppParam { name: "", ty: "FormattableStringFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FormattableStringFactory(FormattableStringFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FormattableStringFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FormattableStringFactory(FormattableStringFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FormattableStringFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::FormattableStringFactory, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::FormattableStringFactory);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::FormattableStringFactory*, "System.Runtime.CompilerServices", "FormattableStringFactory");
NEED_NO_BOX(::System::Runtime::CompilerServices::__FormattableStringFactory__ConcreteFormattableString);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::__FormattableStringFactory__ConcreteFormattableString*, "System.Runtime.CompilerServices",
                       "FormattableStringFactory/ConcreteFormattableString");
