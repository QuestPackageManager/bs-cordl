#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/FormattableStringFactory.hpp"
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
class FormattableString;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
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
// CS Name: ::FormattableStringFactory::ConcreteFormattableString*
class CORDL_TYPE __FormattableStringFactory__ConcreteFormattableString : public ::System::FormattableString {
public:
  // Declarations
  __declspec(property(get = get_ArgumentCount)) int32_t ArgumentCount;

  __declspec(property(get = get_Format))::StringW Format;

  /// @brief Field _arguments, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__arguments, put = __cordl_internal_set__arguments))::ArrayW<::System::Object*, ::Array<::System::Object*>*> _arguments;

  /// @brief Field _format, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__format, put = __cordl_internal_set__format))::StringW _format;

  /// @brief Method GetArgument, addr 0x285c038, size 0x30, virtual true, abstract: false, final false
  inline ::System::Object* GetArgument(int32_t index);

  /// @brief Method GetArguments, addr 0x285c014, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetArguments();

  static inline ::System::Runtime::CompilerServices::__FormattableStringFactory__ConcreteFormattableString* New_ctor(::StringW format,
                                                                                                                     ::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments);

  /// @brief Method ToString, addr 0x285c068, size 0x14, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::IFormatProvider* formatProvider);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__arguments() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__arguments();

  constexpr ::StringW const& __cordl_internal_get__format() const;

  constexpr ::StringW& __cordl_internal_get__format();

  constexpr void __cordl_internal_set__arguments(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set__format(::StringW value);

  /// @brief Method .ctor, addr 0x285bfe0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments);

  /// @brief Method get_ArgumentCount, addr 0x285c01c, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_ArgumentCount();

  /// @brief Method get_Format, addr 0x285c00c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Format();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FormattableStringFactory__ConcreteFormattableString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FormattableStringFactory__ConcreteFormattableString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FormattableStringFactory__ConcreteFormattableString(__FormattableStringFactory__ConcreteFormattableString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FormattableStringFactory__ConcreteFormattableString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FormattableStringFactory__ConcreteFormattableString(__FormattableStringFactory__ConcreteFormattableString const&) = delete;

  /// @brief Field _format, offset: 0x10, size: 0x8, def value: None
  ::StringW ____format;

  /// @brief Field _arguments, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____arguments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::__FormattableStringFactory__ConcreteFormattableString, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::__FormattableStringFactory__ConcreteFormattableString, ____format) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::__FormattableStringFactory__ConcreteFormattableString, ____arguments) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::FormattableStringFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: ::System.Runtime.CompilerServices::FormattableStringFactory*
class CORDL_TYPE FormattableStringFactory : public ::System::Object {
public:
  // Declarations
  using ConcreteFormattableString = ::System::Runtime::CompilerServices::__FormattableStringFactory__ConcreteFormattableString;

  /// @brief Method Create, addr 0x285bf00, size 0xe0, virtual false, abstract: false, final false
  static inline ::System::FormattableString* Create(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FormattableStringFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FormattableStringFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FormattableStringFactory(FormattableStringFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FormattableStringFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FormattableStringFactory(FormattableStringFactory const&) = delete;

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
