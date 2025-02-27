#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/FormatterConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__IFormatterConverter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FormatterConverter)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class FormatterConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::FormatterConverter);
// Dependencies System.Object, System.Runtime.Serialization.IFormatterConverter
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.FormatterConverter
class CORDL_TYPE FormatterConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::Serialization::IFormatterConverter"
  constexpr operator ::System::Runtime::Serialization::IFormatterConverter*() noexcept;

  /// @brief Method Convert, addr 0x3d013cc, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Object* Convert(::System::Object* value, ::System::Type* type);

  static inline ::System::Runtime::Serialization::FormatterConverter* New_ctor();

  /// @brief Method ThrowValueNullException, addr 0x3d0146c, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowValueNullException();

  /// @brief Method ToBoolean, addr 0x3d014b8, size 0x98, virtual true, abstract: false, final true
  inline bool ToBoolean(::System::Object* value);

  /// @brief Method ToInt32, addr 0x3d01550, size 0x98, virtual true, abstract: false, final true
  inline int32_t ToInt32(::System::Object* value);

  /// @brief Method ToInt64, addr 0x3d015e8, size 0x98, virtual true, abstract: false, final true
  inline int64_t ToInt64(::System::Object* value);

  /// @brief Method ToSingle, addr 0x3d01680, size 0x98, virtual true, abstract: false, final true
  inline float_t ToSingle(::System::Object* value);

  /// @brief Method ToString, addr 0x3d01718, size 0x98, virtual true, abstract: false, final true
  inline ::StringW ToString(::System::Object* value);

  /// @brief Method .ctor, addr 0x3d017b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Runtime::Serialization::IFormatterConverter"
  constexpr ::System::Runtime::Serialization::IFormatterConverter* i___System__Runtime__Serialization__IFormatterConverter() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FormatterConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FormatterConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FormatterConverter(FormatterConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FormatterConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FormatterConverter(FormatterConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3202 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::FormatterConverter, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::FormatterConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::FormatterConverter*, "System.Runtime.Serialization", "FormatterConverter");
