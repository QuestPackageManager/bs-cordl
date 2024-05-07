#pragma once
// IWYU pragma private; include "System/Resources/FastResourceComparer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FastResourceComparer)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Resources {
class FastResourceComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::Resources::FastResourceComparer);
// Type: System.Resources::FastResourceComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Resources {
// Is value type: false
// CS Name: ::System.Resources::FastResourceComparer*
class CORDL_TYPE FastResourceComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::System::Resources::FastResourceComparer* Default;

  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEqualityComparer"
  constexpr operator ::System::Collections::IEqualityComparer*() noexcept;

  /// @brief Method Compare, addr 0x2860624, size 0x10, virtual true, abstract: false, final true
  inline int32_t Compare(::StringW a, ::StringW b);

  /// @brief Method Compare, addr 0x2860588, size 0x9c, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Object* a, ::System::Object* b);

  /// @brief Method CompareOrdinal, addr 0x28606e0, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t CompareOrdinal(::StringW a, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t bCharLength);

  /// @brief Method CompareOrdinal, addr 0x2860810, size 0x94, virtual false, abstract: false, final false
  static inline int32_t CompareOrdinal(::cordl_internals::Ptr<uint8_t> a, int32_t byteLen, ::StringW b);

  /// @brief Method CompareOrdinal, addr 0x286079c, size 0x74, virtual false, abstract: false, final false
  static inline int32_t CompareOrdinal(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t aCharLength, ::StringW b);

  /// @brief Method Equals, addr 0x2860634, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::StringW a, ::StringW b);

  /// @brief Method Equals, addr 0x2860644, size 0x9c, virtual true, abstract: false, final true
  inline bool Equals(::System::Object* a, ::System::Object* b);

  /// @brief Method GetHashCode, addr 0x2860534, size 0x54, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::StringW key);

  /// @brief Method GetHashCode, addr 0x286043c, size 0x8c, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::System::Object* key);

  /// @brief Method HashFunction, addr 0x28604c8, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t HashFunction(::StringW key);

  static inline ::System::Resources::FastResourceComparer* New_ctor();

  /// @brief Method .ctor, addr 0x28608a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Resources::FastResourceComparer* getStaticF_Default();

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::StringW>"
  constexpr ::System::Collections::Generic::IComparer_1<::StringW>* i___System__Collections__Generic__IComparer_1___StringW_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::StringW>"
  constexpr ::System::Collections::Generic::IEqualityComparer_1<::StringW>* i___System__Collections__Generic__IEqualityComparer_1___StringW_() noexcept;

  /// @brief Convert to "::System::Collections::IComparer"
  constexpr ::System::Collections::IComparer* i___System__Collections__IComparer() noexcept;

  /// @brief Convert to "::System::Collections::IEqualityComparer"
  constexpr ::System::Collections::IEqualityComparer* i___System__Collections__IEqualityComparer() noexcept;

  static inline void setStaticF_Default(::System::Resources::FastResourceComparer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FastResourceComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FastResourceComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FastResourceComparer(FastResourceComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FastResourceComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FastResourceComparer(FastResourceComparer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Resources::FastResourceComparer, 0x10>, "Size mismatch!");

} // namespace System::Resources
NEED_NO_BOX(::System::Resources::FastResourceComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::FastResourceComparer*, "System.Resources", "FastResourceComparer");
