#pragma once
// IWYU pragma private; include "System/Resources/FastResourceComparer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FastResourceComparer)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Resources {
class FastResourceComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::Resources::FastResourceComparer);
// Dependencies System.Collections.Generic.IComparer`1<T>, System.Collections.Generic.IEqualityComparer`1<T>, System.Collections.IComparer, System.Collections.IEqualityComparer, System.Object
namespace System::Resources {
// Is value type: false
// CS Name: System.Resources.FastResourceComparer
class CORDL_TYPE FastResourceComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Default, put = setStaticF_Default)) ::System::Resources::FastResourceComparer* Default;

  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEqualityComparer"
  constexpr operator ::System::Collections::IEqualityComparer*() noexcept;

  /// @brief Method Compare, addr 0x3d180e0, size 0x10, virtual true, abstract: false, final true
  inline int32_t Compare(::StringW a, ::StringW b);

  /// @brief Method Compare, addr 0x3d18044, size 0x9c, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Object* a, ::System::Object* b);

  /// @brief Method CompareOrdinal, addr 0x3d1819c, size 0xb8, virtual false, abstract: false, final false
  static inline int32_t CompareOrdinal(::StringW a, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t bCharLength);

  /// @brief Method CompareOrdinal, addr 0x3d182c8, size 0x90, virtual false, abstract: false, final false
  static inline int32_t CompareOrdinal(::cordl_internals::Ptr<uint8_t> a, int32_t byteLen, ::StringW b);

  /// @brief Method CompareOrdinal, addr 0x3d18254, size 0x74, virtual false, abstract: false, final false
  static inline int32_t CompareOrdinal(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t aCharLength, ::StringW b);

  /// @brief Method Equals, addr 0x3d180f0, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::StringW a, ::StringW b);

  /// @brief Method Equals, addr 0x3d18100, size 0x9c, virtual true, abstract: false, final true
  inline bool Equals(::System::Object* a, ::System::Object* b);

  /// @brief Method GetHashCode, addr 0x3d17ff0, size 0x54, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::StringW key);

  /// @brief Method GetHashCode, addr 0x3d17ef8, size 0x8c, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::System::Object* key);

  /// @brief Method HashFunction, addr 0x3d17f84, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t HashFunction(::StringW key);

  static inline ::System::Resources::FastResourceComparer* New_ctor();

  /// @brief Method .ctor, addr 0x3d18358, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3431 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Resources::FastResourceComparer, 0x10>, "Size mismatch!");

} // namespace System::Resources
NEED_NO_BOX(::System::Resources::FastResourceComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::FastResourceComparer*, "System.Resources", "FastResourceComparer");
