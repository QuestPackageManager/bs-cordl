#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Comparer)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Collections {
class IComparer;
}
namespace System::Globalization {
class CompareInfo;
}
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace System::Collections {
class Comparer;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Comparer);
// Type: System.Collections::Comparer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3752))
// CS Name: ::System.Collections::Comparer*
class CORDL_TYPE Comparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _compareInfo, offset 0x10, size 0x8
  __declspec(property(get = __get__compareInfo, put = __set__compareInfo))::System::Globalization::CompareInfo* _compareInfo;

  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::System::Collections::Comparer* Default;

  /// @brief Field DefaultInvariant, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefaultInvariant, put = setStaticF_DefaultInvariant))::System::Collections::Comparer* DefaultInvariant;

  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  constexpr ::System::Globalization::CompareInfo*& __get__compareInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CompareInfo*> const& __get__compareInfo() const;

  constexpr void __set__compareInfo(::System::Globalization::CompareInfo* value);

  static inline void setStaticF_Default(::System::Collections::Comparer* value);

  static inline ::System::Collections::Comparer* getStaticF_Default();

  static inline void setStaticF_DefaultInvariant(::System::Collections::Comparer* value);

  static inline ::System::Collections::Comparer* getStaticF_DefaultInvariant();

  static inline ::System::Collections::Comparer* New_ctor(::System::Globalization::CultureInfo* culture);

  /// @brief Method .ctor, addr 0x257bf3c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Globalization::CultureInfo* culture);

  static inline ::System::Collections::Comparer* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x257bfc4, size 0x174, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetObjectData, addr 0x257c138, size 0xa4, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method Compare, addr 0x257c1dc, size 0x210, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Object* a, ::System::Object* b);

  // Ctor Parameters [CppParam { name: "", ty: "Comparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Comparer(Comparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Comparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Comparer(Comparer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Comparer();

public:
  /// @brief Field _compareInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Globalization::CompareInfo* ____compareInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Comparer, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Collections::Comparer, ____compareInfo) == 0x10, "Offset mismatch!");

} // namespace System::Collections
NEED_NO_BOX(::System::Collections::Comparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Comparer*, "System.Collections", "Comparer");
