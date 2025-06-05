#pragma once
// IWYU pragma private; include "System/Empty.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Empty)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class Empty;
}
// Write type traits
MARK_REF_PTR_T(::System::Empty);
// Dependencies System.Object, System.Runtime.Serialization.ISerializable
namespace System {
// Is value type: false
// CS Name: System.Empty
class CORDL_TYPE Empty : public ::System::Object {
public:
  // Declarations
  /// @brief Field Value, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Value, put = setStaticF_Value)) ::System::Empty* Value;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method GetObjectData, addr 0x3e1e31c, size 0x68, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Empty* New_ctor();

  /// @brief Method ToString, addr 0x3e1e2d4, size 0x48, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x3e1e2cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Empty* getStaticF_Value();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  static inline void setStaticF_Value(::System::Empty* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Empty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Empty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Empty(Empty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Empty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Empty(Empty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2556 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Empty, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Empty);
DEFINE_IL2CPP_ARG_TYPE(::System::Empty*, "System", "Empty");
