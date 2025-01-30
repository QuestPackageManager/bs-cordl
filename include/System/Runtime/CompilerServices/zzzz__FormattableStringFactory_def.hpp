#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/FormattableStringFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__FormattableString_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FormattableStringFactory)
namespace System::Runtime::CompilerServices {
class FormattableStringFactory_ConcreteFormattableString;
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
class FormattableStringFactory_ConcreteFormattableString;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::FormattableStringFactory);
MARK_REF_PTR_T(::System::Runtime::CompilerServices::FormattableStringFactory_ConcreteFormattableString);
// Dependencies System.FormattableString
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.FormattableStringFactory/ConcreteFormattableString
class CORDL_TYPE FormattableStringFactory_ConcreteFormattableString : public ::System::FormattableString {
public:
  // Declarations
  __declspec(property(get = get_ArgumentCount)) int32_t ArgumentCount;

  __declspec(property(get = get_Format)) ::StringW Format;

  /// @brief Field _arguments, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__arguments, put = __cordl_internal_set__arguments)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> _arguments;

  /// @brief Field _format, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__format, put = __cordl_internal_set__format)) ::StringW _format;

  /// @brief Method GetArgument, addr 0x3d1a724, size 0x30, virtual true, abstract: false, final false
  inline ::System::Object* GetArgument(int32_t index);

  /// @brief Method GetArguments, addr 0x3d1a700, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetArguments();

  static inline ::System::Runtime::CompilerServices::FormattableStringFactory_ConcreteFormattableString* New_ctor(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments);

  /// @brief Method ToString, addr 0x3d1a754, size 0x14, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::IFormatProvider* formatProvider);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__arguments() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__arguments();

  constexpr ::StringW const& __cordl_internal_get__format() const;

  constexpr ::StringW& __cordl_internal_get__format();

  constexpr void __cordl_internal_set__arguments(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set__format(::StringW value);

  /// @brief Method .ctor, addr 0x3d1a6cc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments);

  /// @brief Method get_ArgumentCount, addr 0x3d1a708, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_ArgumentCount();

  /// @brief Method get_Format, addr 0x3d1a6f8, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Format();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FormattableStringFactory_ConcreteFormattableString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FormattableStringFactory_ConcreteFormattableString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FormattableStringFactory_ConcreteFormattableString(FormattableStringFactory_ConcreteFormattableString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FormattableStringFactory_ConcreteFormattableString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FormattableStringFactory_ConcreteFormattableString(FormattableStringFactory_ConcreteFormattableString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3370 };

  /// @brief Field _format, offset: 0x10, size: 0x8, def value: None
  ::StringW ____format;

  /// @brief Field _arguments, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____arguments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::FormattableStringFactory_ConcreteFormattableString, ____format) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::FormattableStringFactory_ConcreteFormattableString, ____arguments) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::FormattableStringFactory_ConcreteFormattableString, 0x20>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
// Dependencies System.Object
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.FormattableStringFactory
class CORDL_TYPE FormattableStringFactory : public ::System::Object {
public:
  // Declarations
  using ConcreteFormattableString = ::System::Runtime::CompilerServices::FormattableStringFactory_ConcreteFormattableString;

  /// @brief Method Create, addr 0x3d1a5fc, size 0xd0, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3371 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::FormattableStringFactory, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::FormattableStringFactory);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::FormattableStringFactory*, "System.Runtime.CompilerServices", "FormattableStringFactory");
NEED_NO_BOX(::System::Runtime::CompilerServices::FormattableStringFactory_ConcreteFormattableString);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::FormattableStringFactory_ConcreteFormattableString*, "System.Runtime.CompilerServices",
                       "FormattableStringFactory/ConcreteFormattableString");
