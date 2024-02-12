#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
CORDL_MODULE_EXPORT(RuntimeWrappedException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class RuntimeWrappedException;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::RuntimeWrappedException);
// Type: System.Runtime.CompilerServices::RuntimeWrappedException
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2561))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3379))
// CS Name: ::System.Runtime.CompilerServices::RuntimeWrappedException*
class CORDL_TYPE RuntimeWrappedException : public ::System::Exception {
public:
  // Declarations
  /// @brief Field _wrappedException, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__wrappedException, put = __cordl_internal_set__wrappedException))::System::Object* _wrappedException;

  constexpr ::System::Object*& __cordl_internal_get__wrappedException();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__wrappedException() const;

  constexpr void __cordl_internal_set__wrappedException(::System::Object* value);

  static inline ::System::Runtime::CompilerServices::RuntimeWrappedException* New_ctor(::System::Object* thrownObject);

  /// @brief Method .ctor, addr 0x24fb5c8, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* thrownObject);

  static inline ::System::Runtime::CompilerServices::RuntimeWrappedException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                       ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x24fb658, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetObjectData, addr 0x24fb758, size 0xdc, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Runtime::CompilerServices::RuntimeWrappedException* New_ctor();

  /// @brief Method .ctor, addr 0x24fb834, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeWrappedException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeWrappedException(RuntimeWrappedException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeWrappedException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeWrappedException(RuntimeWrappedException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeWrappedException();

public:
  /// @brief Field _wrappedException, offset: 0x90, size: 0x8, def value: None
  ::System::Object* ____wrappedException;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::RuntimeWrappedException, 0x98>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::RuntimeWrappedException, ____wrappedException) == 0x90, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::RuntimeWrappedException);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::RuntimeWrappedException*, "System.Runtime.CompilerServices", "RuntimeWrappedException");
