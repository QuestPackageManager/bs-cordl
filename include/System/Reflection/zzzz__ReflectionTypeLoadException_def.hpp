#pragma once
// IWYU pragma private; include "System/Reflection/ReflectionTypeLoadException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ReflectionTypeLoadException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class ReflectionTypeLoadException;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::ReflectionTypeLoadException);
// Dependencies System.Runtime.Serialization.ISerializable, System.SystemException
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.ReflectionTypeLoadException
class CORDL_TYPE ReflectionTypeLoadException : public ::System::SystemException {
public:
  // Declarations
  __declspec(property(get = get_LoaderExceptions)) ::ArrayW<::System::Exception*, ::Array<::System::Exception*>*> LoaderExceptions;

  __declspec(property(get = get_Message)) ::StringW Message;

  /// @brief Field <LoaderExceptions>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__LoaderExceptions_k__BackingField,
                      put = __cordl_internal_set__LoaderExceptions_k__BackingField)) ::ArrayW<::System::Exception*, ::Array<::System::Exception*>*>
      _LoaderExceptions_k__BackingField;

  /// @brief Field <Types>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__Types_k__BackingField, put = __cordl_internal_set__Types_k__BackingField)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*>
      _Types_k__BackingField;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method CreateString, addr 0x3d2797c, size 0x13c, virtual false, abstract: false, final false
  inline ::StringW CreateString(bool isMessage);

  /// @brief Method GetObjectData, addr 0x3d27844, size 0x128, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Reflection::ReflectionTypeLoadException* New_ctor(::ArrayW<::System::Type*, ::Array<::System::Type*>*> classes,
                                                                            ::ArrayW<::System::Exception*, ::Array<::System::Exception*>*> exceptions);

  static inline ::System::Reflection::ReflectionTypeLoadException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method ToString, addr 0x3d27ab8, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::ArrayW<::System::Exception*, ::Array<::System::Exception*>*> const& __cordl_internal_get__LoaderExceptions_k__BackingField() const;

  constexpr ::ArrayW<::System::Exception*, ::Array<::System::Exception*>*>& __cordl_internal_get__LoaderExceptions_k__BackingField();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get__Types_k__BackingField() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get__Types_k__BackingField();

  constexpr void __cordl_internal_set__LoaderExceptions_k__BackingField(::ArrayW<::System::Exception*, ::Array<::System::Exception*>*> value);

  constexpr void __cordl_internal_set__Types_k__BackingField(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  /// @brief Method .ctor, addr 0x3d276d0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Type*, ::Array<::System::Type*>*> classes, ::ArrayW<::System::Exception*, ::Array<::System::Exception*>*> exceptions);

  /// @brief Method .ctor, addr 0x3d2770c, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_LoaderExceptions, addr 0x3d2796c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Exception*, ::Array<::System::Exception*>*> get_LoaderExceptions();

  /// @brief Method get_Message, addr 0x3d27974, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionTypeLoadException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeLoadException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionTypeLoadException(ReflectionTypeLoadException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeLoadException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionTypeLoadException(ReflectionTypeLoadException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3491 };

  /// @brief Field <Types>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ____Types_k__BackingField;

  /// @brief Field <LoaderExceptions>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::System::Exception*, ::Array<::System::Exception*>*> ____LoaderExceptions_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::ReflectionTypeLoadException, ____Types_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::ReflectionTypeLoadException, ____LoaderExceptions_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::ReflectionTypeLoadException, 0xa0>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::ReflectionTypeLoadException);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ReflectionTypeLoadException*, "System.Reflection", "ReflectionTypeLoadException");
