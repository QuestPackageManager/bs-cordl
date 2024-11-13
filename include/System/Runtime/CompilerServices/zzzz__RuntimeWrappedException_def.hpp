#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/RuntimeWrappedException.hpp"
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
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: ::System.Runtime.CompilerServices::RuntimeWrappedException*
class CORDL_TYPE RuntimeWrappedException : public ::System::Exception {
public:
  // Declarations
  __declspec(property(get = get_WrappedException)) ::System::Object* WrappedException;

  /// @brief Field _wrappedException, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__wrappedException, put = __cordl_internal_set__wrappedException)) ::System::Object* _wrappedException;

  /// @brief Method GetObjectData, addr 0x3cb757c, size 0xdc, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Runtime::CompilerServices::RuntimeWrappedException* New_ctor();

  static inline ::System::Runtime::CompilerServices::RuntimeWrappedException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                       ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Runtime::CompilerServices::RuntimeWrappedException* New_ctor(::System::Object* thrownObject);

  constexpr ::System::Object*& __cordl_internal_get__wrappedException();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__wrappedException() const;

  constexpr void __cordl_internal_set__wrappedException(::System::Object* value);

  /// @brief Method .ctor, addr 0x3cb7660, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3cb747c, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3cb73ec, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* thrownObject);

  /// @brief Method get_WrappedException, addr 0x3cb7658, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_WrappedException();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeWrappedException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeWrappedException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeWrappedException(RuntimeWrappedException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeWrappedException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeWrappedException(RuntimeWrappedException const&) = delete;

  /// @brief Field _wrappedException, offset: 0x90, size: 0x8, def value: None
  ::System::Object* ____wrappedException;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3383 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::RuntimeWrappedException, 0x98>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::RuntimeWrappedException, ____wrappedException) == 0x90, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::RuntimeWrappedException);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::RuntimeWrappedException*, "System.Runtime.CompilerServices", "RuntimeWrappedException");
