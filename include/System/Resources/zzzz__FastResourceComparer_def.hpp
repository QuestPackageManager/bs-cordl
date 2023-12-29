#pragma once
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
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3427))
// CS Name: ::System.Resources::FastResourceComparer*
class CORDL_TYPE FastResourceComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::System::Resources::FastResourceComparer* Default;

  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEqualityComparer"
  constexpr operator ::System::Collections::IEqualityComparer*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::StringW>*() noexcept;

  static inline void setStaticF_Default(::System::Resources::FastResourceComparer* value);

  static inline ::System::Resources::FastResourceComparer* getStaticF_Default();

  /// @brief Method GetHashCode addr 0x2386560 size 0x8c virtual true final true
  inline int32_t GetHashCode(::System::Object* key);

  /// @brief Method GetHashCode addr 0x2386658 size 0x54 virtual true final true
  inline int32_t GetHashCode(::StringW key);

  /// @brief Method HashFunction addr 0x23865ec size 0x6c virtual false final false
  static inline int32_t HashFunction(::StringW key);

  /// @brief Method Compare addr 0x23866ac size 0x9c virtual true final true
  inline int32_t Compare(::System::Object* a, ::System::Object* b);

  /// @brief Method Compare addr 0x2386748 size 0x10 virtual true final true
  inline int32_t Compare(::StringW a, ::StringW b);

  /// @brief Method Equals addr 0x2386758 size 0x10 virtual true final true
  inline bool Equals(::StringW a, ::StringW b);

  /// @brief Method Equals addr 0x2386768 size 0x9c virtual true final true
  inline bool Equals(::System::Object* a, ::System::Object* b);

  /// @brief Method CompareOrdinal addr 0x2386804 size 0xbc virtual false final false
  static inline int32_t CompareOrdinal(::StringW a, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t bCharLength);

  /// @brief Method CompareOrdinal addr 0x23868c0 size 0x74 virtual false final false
  static inline int32_t CompareOrdinal(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t aCharLength, ::StringW b);

  /// @brief Method CompareOrdinal addr 0x2386934 size 0x94 virtual false final false
  static inline int32_t CompareOrdinal(::cordl_internals::Ptr<uint8_t> a, int32_t byteLen, ::StringW b);

  static inline ::System::Resources::FastResourceComparer* New_ctor();

  /// @brief Method .ctor addr 0x23869c8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FastResourceComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FastResourceComparer(FastResourceComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FastResourceComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FastResourceComparer(FastResourceComparer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FastResourceComparer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Resources::FastResourceComparer, 0x10>, "Size mismatch!");

} // namespace System::Resources
NEED_NO_BOX(::System::Resources::FastResourceComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::FastResourceComparer*, "System.Resources", "FastResourceComparer");
