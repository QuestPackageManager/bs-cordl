#pragma once
// IWYU pragma private; include "System/Collections/Comparer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Comparer)
namespace System::Globalization {
class CompareInfo;
}
namespace System::Globalization {
class CultureInfo;
}
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
namespace System::Collections {
class Comparer;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Comparer);
// Dependencies System.Collections.IComparer, System.Object, System.Runtime.Serialization.ISerializable
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.Comparer
class CORDL_TYPE Comparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Default, put = setStaticF_Default)) ::System::Collections::Comparer* Default;

  /// @brief Field DefaultInvariant, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DefaultInvariant, put = setStaticF_DefaultInvariant)) ::System::Collections::Comparer* DefaultInvariant;

  /// @brief Field _compareInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__compareInfo, put = __cordl_internal_set__compareInfo)) ::System::Globalization::CompareInfo* _compareInfo;

  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method Compare, addr 0x3db8b74, size 0x20c, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Object* a, ::System::Object* b);

  /// @brief Method GetObjectData, addr 0x3db8ad4, size 0xa0, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Collections::Comparer* New_ctor(::System::Globalization::CultureInfo* culture);

  static inline ::System::Collections::Comparer* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  constexpr ::System::Globalization::CompareInfo* const& __cordl_internal_get__compareInfo() const;

  constexpr ::System::Globalization::CompareInfo*& __cordl_internal_get__compareInfo();

  constexpr void __cordl_internal_set__compareInfo(::System::Globalization::CompareInfo* value);

  /// @brief Method .ctor, addr 0x3db88e0, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Globalization::CultureInfo* culture);

  /// @brief Method .ctor, addr 0x3db8964, size 0x170, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Collections::Comparer* getStaticF_Default();

  static inline ::System::Collections::Comparer* getStaticF_DefaultInvariant();

  /// @brief Convert to "::System::Collections::IComparer"
  constexpr ::System::Collections::IComparer* i___System__Collections__IComparer() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  static inline void setStaticF_Default(::System::Collections::Comparer* value);

  static inline void setStaticF_DefaultInvariant(::System::Collections::Comparer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Comparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Comparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Comparer(Comparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Comparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Comparer(Comparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3759 };

  /// @brief Field _compareInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Globalization::CompareInfo* ____compareInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::Comparer, ____compareInfo) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::Comparer, 0x18>, "Size mismatch!");

} // namespace System::Collections
NEED_NO_BOX(::System::Collections::Comparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Comparer*, "System.Collections", "Comparer");
