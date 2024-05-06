#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/IFormatterConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IFormatterConverter)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class IFormatterConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::IFormatterConverter);
// Type: System.Runtime.Serialization::IFormatterConverter
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: ::System.Runtime.Serialization::IFormatterConverter*
class CORDL_TYPE IFormatterConverter {
public:
  // Declarations
  /// @brief Method Convert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* Convert(::System::Object* value, ::System::Type* type);

  /// @brief Method ToBoolean, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool ToBoolean(::System::Object* value);

  /// @brief Method ToInt32, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t ToInt32(::System::Object* value);

  /// @brief Method ToInt64, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t ToInt64(::System::Object* value);

  /// @brief Method ToSingle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t ToSingle(::System::Object* value);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW ToString(::System::Object* value);

  // Ctor Parameters [CppParam { name: "", ty: "IFormatterConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IFormatterConverter(IFormatterConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IFormatterConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFormatterConverter(IFormatterConverter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::IFormatterConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::IFormatterConverter*, "System.Runtime.Serialization", "IFormatterConverter");
