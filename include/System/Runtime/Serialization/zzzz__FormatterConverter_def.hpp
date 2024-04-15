#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FormatterConverter)
namespace System::Runtime::Serialization {
class IFormatterConverter;
}
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
// Type: System.Runtime.Serialization::FormatterConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: ::System.Runtime.Serialization::FormatterConverter*
class CORDL_TYPE FormatterConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::Serialization::IFormatterConverter"
  constexpr operator ::System::Runtime::Serialization::IFormatterConverter*() noexcept;

  /// @brief Method Convert, addr 0x27373e0, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Object* Convert(::System::Object* value, ::System::Type* type);

  static inline ::System::Runtime::Serialization::FormatterConverter* New_ctor();

  /// @brief Method ThrowValueNullException, addr 0x2737480, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowValueNullException();

  /// @brief Method ToBoolean, addr 0x27374d0, size 0x98, virtual true, abstract: false, final true
  inline bool ToBoolean(::System::Object* value);

  /// @brief Method ToInt32, addr 0x2737568, size 0x98, virtual true, abstract: false, final true
  inline int32_t ToInt32(::System::Object* value);

  /// @brief Method ToInt64, addr 0x2737600, size 0x98, virtual true, abstract: false, final true
  inline int64_t ToInt64(::System::Object* value);

  /// @brief Method ToSingle, addr 0x2737698, size 0x98, virtual true, abstract: false, final true
  inline float_t ToSingle(::System::Object* value);

  /// @brief Method ToString, addr 0x2737730, size 0x98, virtual true, abstract: false, final true
  inline ::StringW ToString(::System::Object* value);

  /// @brief Method .ctor, addr 0x27377c8, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::FormatterConverter, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::FormatterConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::FormatterConverter*, "System.Runtime.Serialization", "FormatterConverter");
