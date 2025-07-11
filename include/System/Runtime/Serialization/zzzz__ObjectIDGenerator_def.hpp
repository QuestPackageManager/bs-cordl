#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ObjectIDGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectIDGenerator)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ObjectIDGenerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::ObjectIDGenerator);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.ObjectIDGenerator
class CORDL_TYPE ObjectIDGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_currentCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_currentCount, put = __cordl_internal_set_m_currentCount)) int32_t m_currentCount;

  /// @brief Field m_currentSize, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_currentSize, put = __cordl_internal_set_m_currentSize)) int32_t m_currentSize;

  /// @brief Field m_ids, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ids, put = __cordl_internal_set_m_ids)) ::ArrayW<int64_t, ::Array<int64_t>*> m_ids;

  /// @brief Field m_objs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_objs, put = __cordl_internal_set_m_objs)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> m_objs;

  /// @brief Field sizes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_sizes, put = setStaticF_sizes)) ::ArrayW<int32_t, ::Array<int32_t>*> sizes;

  /// @brief Method FindElement, addr 0x3cf7500, size 0xc4, virtual false, abstract: false, final false
  inline int32_t FindElement(::System::Object* obj, ::ByRef<bool> found);

  /// @brief Method GetId, addr 0x3cf75c4, size 0x180, virtual true, abstract: false, final false
  inline int64_t GetId(::System::Object* obj, ::ByRef<bool> firstTime);

  /// @brief Method HasId, addr 0x3cf79f0, size 0xd0, virtual true, abstract: false, final false
  inline int64_t HasId(::System::Object* obj, ::ByRef<bool> firstTime);

  static inline ::System::Runtime::Serialization::ObjectIDGenerator* New_ctor();

  /// @brief Method Rehash, addr 0x3cf7744, size 0x2ac, virtual false, abstract: false, final false
  inline void Rehash();

  constexpr int32_t const& __cordl_internal_get_m_currentCount() const;

  constexpr int32_t& __cordl_internal_get_m_currentCount();

  constexpr int32_t const& __cordl_internal_get_m_currentSize() const;

  constexpr int32_t& __cordl_internal_get_m_currentSize();

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& __cordl_internal_get_m_ids() const;

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& __cordl_internal_get_m_ids();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_m_objs() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_m_objs();

  constexpr void __cordl_internal_set_m_currentCount(int32_t value);

  constexpr void __cordl_internal_set_m_currentSize(int32_t value);

  constexpr void __cordl_internal_set_m_ids(::ArrayW<int64_t, ::Array<int64_t>*> value);

  constexpr void __cordl_internal_set_m_objs(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method .ctor, addr 0x3cf7428, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_sizes();

  static inline void setStaticF_sizes(::ArrayW<int32_t, ::Array<int32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectIDGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectIDGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectIDGenerator(ObjectIDGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectIDGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectIDGenerator(ObjectIDGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3216 };

  /// @brief Field m_currentCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_currentCount;

  /// @brief Field m_currentSize, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_currentSize;

  /// @brief Field m_ids, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int64_t, ::Array<int64_t>*> ___m_ids;

  /// @brief Field m_objs, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___m_objs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::ObjectIDGenerator, ___m_currentCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ObjectIDGenerator, ___m_currentSize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ObjectIDGenerator, ___m_ids) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ObjectIDGenerator, ___m_objs) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::ObjectIDGenerator, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::ObjectIDGenerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ObjectIDGenerator*, "System.Runtime.Serialization", "ObjectIDGenerator");
