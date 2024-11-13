#pragma once
// IWYU pragma private; include "System/FormattableString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FormattableString)
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class FormattableString;
}
// Write type traits
MARK_REF_PTR_T(::System::FormattableString);
// Type: System::FormattableString
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::FormattableString*
class CORDL_TYPE FormattableString : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ArgumentCount)) int32_t ArgumentCount;

  __declspec(property(get = get_Format)) ::StringW Format;

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*() noexcept;

  /// @brief Method GetArgument, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* GetArgument(int32_t index);

  /// @brief Method GetArguments, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetArguments();

  static inline ::System::FormattableString* New_ctor();

  /// @brief Method System.IFormattable.ToString, addr 0x3d738b8, size 0x14, virtual true, abstract: false, final true
  inline ::StringW System_IFormattable_ToString(::StringW ignored, ::System::IFormatProvider* formatProvider);

  /// @brief Method ToString, addr 0x3d738cc, size 0x68, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW ToString(::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x3d73934, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ArgumentCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_ArgumentCount();

  /// @brief Method get_Format, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Format();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FormattableString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FormattableString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FormattableString(FormattableString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FormattableString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FormattableString(FormattableString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2385 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::FormattableString, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::FormattableString);
DEFINE_IL2CPP_ARG_TYPE(::System::FormattableString*, "System", "FormattableString");
