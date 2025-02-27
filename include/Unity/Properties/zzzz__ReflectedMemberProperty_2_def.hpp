#pragma once
// IWYU pragma private; include "Unity/Properties/ReflectedMemberProperty_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ReflectedMemberProperty_2)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Properties {
class IMemberInfo;
}
namespace Unity::Properties {
template <typename TContainer, typename TValue> class ReflectedMemberProperty_2_GetClassValueAction;
}
namespace Unity::Properties {
template <typename TContainer, typename TValue> class ReflectedMemberProperty_2_GetStructValueAction;
}
namespace Unity::Properties {
template <typename TContainer, typename TValue> class ReflectedMemberProperty_2_SetClassValueAction;
}
namespace Unity::Properties {
template <typename TContainer, typename TValue> class ReflectedMemberProperty_2_SetStructValueAction;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TContainer, typename TValue> class ReflectedMemberProperty_2;
}
namespace Unity::Properties {
template <typename TContainer, typename TValue> class ReflectedMemberProperty_2_GetClassValueAction;
}
namespace Unity::Properties {
template <typename TContainer, typename TValue> class ReflectedMemberProperty_2_GetStructValueAction;
}
namespace Unity::Properties {
template <typename TContainer, typename TValue> class ReflectedMemberProperty_2_SetClassValueAction;
}
namespace Unity::Properties {
template <typename TContainer, typename TValue> class ReflectedMemberProperty_2_SetStructValueAction;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::ReflectedMemberProperty_2);
MARK_GEN_REF_PTR_T(::Unity::Properties::ReflectedMemberProperty_2_GetClassValueAction);
MARK_GEN_REF_PTR_T(::Unity::Properties::ReflectedMemberProperty_2_GetStructValueAction);
MARK_GEN_REF_PTR_T(::Unity::Properties::ReflectedMemberProperty_2_SetClassValueAction);
MARK_GEN_REF_PTR_T(::Unity::Properties::ReflectedMemberProperty_2_SetStructValueAction);
// Dependencies System.MulticastDelegate
namespace Unity::Properties {
// cpp template
template <typename TContainer, typename TValue>
// Is value type: false
// CS Name: Unity.Properties.ReflectedMemberProperty`2/GetStructValueAction<TContainer,TValue>
class CORDL_TYPE ReflectedMemberProperty_2_GetStructValueAction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValue Invoke(::ByRef<TContainer> container);

  static inline ::Unity::Properties::ReflectedMemberProperty_2_GetStructValueAction<TContainer, TValue>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectedMemberProperty_2_GetStructValueAction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectedMemberProperty_2_GetStructValueAction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectedMemberProperty_2_GetStructValueAction(ReflectedMemberProperty_2_GetStructValueAction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectedMemberProperty_2_GetStructValueAction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectedMemberProperty_2_GetStructValueAction(ReflectedMemberProperty_2_GetStructValueAction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17456 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
// Dependencies System.MulticastDelegate
namespace Unity::Properties {
// cpp template
template <typename TContainer, typename TValue>
// Is value type: false
// CS Name: Unity.Properties.ReflectedMemberProperty`2/SetStructValueAction<TContainer,TValue>
class CORDL_TYPE ReflectedMemberProperty_2_SetStructValueAction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<TContainer> container, TValue value);

  static inline ::Unity::Properties::ReflectedMemberProperty_2_SetStructValueAction<TContainer, TValue>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectedMemberProperty_2_SetStructValueAction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectedMemberProperty_2_SetStructValueAction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectedMemberProperty_2_SetStructValueAction(ReflectedMemberProperty_2_SetStructValueAction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectedMemberProperty_2_SetStructValueAction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectedMemberProperty_2_SetStructValueAction(ReflectedMemberProperty_2_SetStructValueAction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17457 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
// Dependencies System.MulticastDelegate
namespace Unity::Properties {
// cpp template
template <typename TContainer, typename TValue>
// Is value type: false
// CS Name: Unity.Properties.ReflectedMemberProperty`2/GetClassValueAction<TContainer,TValue>
class CORDL_TYPE ReflectedMemberProperty_2_GetClassValueAction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValue Invoke(TContainer container);

  static inline ::Unity::Properties::ReflectedMemberProperty_2_GetClassValueAction<TContainer, TValue>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectedMemberProperty_2_GetClassValueAction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectedMemberProperty_2_GetClassValueAction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectedMemberProperty_2_GetClassValueAction(ReflectedMemberProperty_2_GetClassValueAction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectedMemberProperty_2_GetClassValueAction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectedMemberProperty_2_GetClassValueAction(ReflectedMemberProperty_2_GetClassValueAction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17458 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
// Dependencies System.MulticastDelegate
namespace Unity::Properties {
// cpp template
template <typename TContainer, typename TValue>
// Is value type: false
// CS Name: Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<TContainer,TValue>
class CORDL_TYPE ReflectedMemberProperty_2_SetClassValueAction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(TContainer container, TValue value);

  static inline ::Unity::Properties::ReflectedMemberProperty_2_SetClassValueAction<TContainer, TValue>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectedMemberProperty_2_SetClassValueAction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectedMemberProperty_2_SetClassValueAction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectedMemberProperty_2_SetClassValueAction(ReflectedMemberProperty_2_SetClassValueAction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectedMemberProperty_2_SetClassValueAction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectedMemberProperty_2_SetClassValueAction(ReflectedMemberProperty_2_SetClassValueAction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17459 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
// Dependencies Unity.Properties.Property`2<TContainer, TValue>
namespace Unity::Properties {
// cpp template
template <typename TContainer, typename TValue>
// Is value type: false
// CS Name: Unity.Properties.ReflectedMemberProperty`2<TContainer,TValue>
class CORDL_TYPE ReflectedMemberProperty_2 : public ::Unity::Properties::Property_2<TContainer, TValue> {
public:
  // Declarations
  using GetClassValueAction = ::Unity::Properties::ReflectedMemberProperty_2_GetClassValueAction<TContainer, TValue>;

  using GetStructValueAction = ::Unity::Properties::ReflectedMemberProperty_2_GetStructValueAction<TContainer, TValue>;

  using SetClassValueAction = ::Unity::Properties::ReflectedMemberProperty_2_SetClassValueAction<TContainer, TValue>;

  using SetStructValueAction = ::Unity::Properties::ReflectedMemberProperty_2_SetStructValueAction<TContainer, TValue>;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Field m_GetClassValueAction, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GetClassValueAction,
                      put = __cordl_internal_set_m_GetClassValueAction)) ::Unity::Properties::ReflectedMemberProperty_2_GetClassValueAction<TContainer, TValue>* m_GetClassValueAction;

  /// @brief Field m_GetStructValueAction, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GetStructValueAction,
                      put = __cordl_internal_set_m_GetStructValueAction)) ::Unity::Properties::ReflectedMemberProperty_2_GetStructValueAction<TContainer, TValue>* m_GetStructValueAction;

  /// @brief Field m_Info, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Info, put = __cordl_internal_set_m_Info)) ::Unity::Properties::IMemberInfo* m_Info;

  /// @brief Field m_IsStructContainerType, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsStructContainerType, put = __cordl_internal_set_m_IsStructContainerType)) bool m_IsStructContainerType;

  /// @brief Field m_SetClassValueAction, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SetClassValueAction,
                      put = __cordl_internal_set_m_SetClassValueAction)) ::Unity::Properties::ReflectedMemberProperty_2_SetClassValueAction<TContainer, TValue>* m_SetClassValueAction;

  /// @brief Field m_SetStructValueAction, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SetStructValueAction,
                      put = __cordl_internal_set_m_SetStructValueAction)) ::Unity::Properties::ReflectedMemberProperty_2_SetStructValueAction<TContainer, TValue>* m_SetStructValueAction;

  static inline ::Unity::Properties::ReflectedMemberProperty_2<TContainer, TValue>* New_ctor(::Unity::Properties::IMemberInfo* info, ::StringW name);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr ::Unity::Properties::ReflectedMemberProperty_2_GetClassValueAction<TContainer, TValue>* const& __cordl_internal_get_m_GetClassValueAction() const;

  constexpr ::Unity::Properties::ReflectedMemberProperty_2_GetClassValueAction<TContainer, TValue>*& __cordl_internal_get_m_GetClassValueAction();

  constexpr ::Unity::Properties::ReflectedMemberProperty_2_GetStructValueAction<TContainer, TValue>* const& __cordl_internal_get_m_GetStructValueAction() const;

  constexpr ::Unity::Properties::ReflectedMemberProperty_2_GetStructValueAction<TContainer, TValue>*& __cordl_internal_get_m_GetStructValueAction();

  constexpr ::Unity::Properties::IMemberInfo* const& __cordl_internal_get_m_Info() const;

  constexpr ::Unity::Properties::IMemberInfo*& __cordl_internal_get_m_Info();

  constexpr bool const& __cordl_internal_get_m_IsStructContainerType() const;

  constexpr bool& __cordl_internal_get_m_IsStructContainerType();

  constexpr ::Unity::Properties::ReflectedMemberProperty_2_SetClassValueAction<TContainer, TValue>* const& __cordl_internal_get_m_SetClassValueAction() const;

  constexpr ::Unity::Properties::ReflectedMemberProperty_2_SetClassValueAction<TContainer, TValue>*& __cordl_internal_get_m_SetClassValueAction();

  constexpr ::Unity::Properties::ReflectedMemberProperty_2_SetStructValueAction<TContainer, TValue>* const& __cordl_internal_get_m_SetStructValueAction() const;

  constexpr ::Unity::Properties::ReflectedMemberProperty_2_SetStructValueAction<TContainer, TValue>*& __cordl_internal_get_m_SetStructValueAction();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_m_GetClassValueAction(::Unity::Properties::ReflectedMemberProperty_2_GetClassValueAction<TContainer, TValue>* value);

  constexpr void __cordl_internal_set_m_GetStructValueAction(::Unity::Properties::ReflectedMemberProperty_2_GetStructValueAction<TContainer, TValue>* value);

  constexpr void __cordl_internal_set_m_Info(::Unity::Properties::IMemberInfo* value);

  constexpr void __cordl_internal_set_m_IsStructContainerType(bool value);

  constexpr void __cordl_internal_set_m_SetClassValueAction(::Unity::Properties::ReflectedMemberProperty_2_SetClassValueAction<TContainer, TValue>* value);

  constexpr void __cordl_internal_set_m_SetStructValueAction(::Unity::Properties::ReflectedMemberProperty_2_SetStructValueAction<TContainer, TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Properties::IMemberInfo* info, ::StringW name);

  /// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectedMemberProperty_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectedMemberProperty_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectedMemberProperty_2(ReflectedMemberProperty_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectedMemberProperty_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectedMemberProperty_2(ReflectedMemberProperty_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17460 };

  /// @brief Field m_Info, offset: 0x18, size: 0x8, def value: None
  ::Unity::Properties::IMemberInfo* ___m_Info;

  /// @brief Field m_IsStructContainerType, offset: 0x20, size: 0x1, def value: None
  bool ___m_IsStructContainerType;

  /// @brief Field m_GetStructValueAction, offset: 0x28, size: 0x8, def value: None
  ::Unity::Properties::ReflectedMemberProperty_2_GetStructValueAction<TContainer, TValue>* ___m_GetStructValueAction;

  /// @brief Field m_SetStructValueAction, offset: 0x30, size: 0x8, def value: None
  ::Unity::Properties::ReflectedMemberProperty_2_SetStructValueAction<TContainer, TValue>* ___m_SetStructValueAction;

  /// @brief Field m_GetClassValueAction, offset: 0x38, size: 0x8, def value: None
  ::Unity::Properties::ReflectedMemberProperty_2_GetClassValueAction<TContainer, TValue>* ___m_GetClassValueAction;

  /// @brief Field m_SetClassValueAction, offset: 0x40, size: 0x8, def value: None
  ::Unity::Properties::ReflectedMemberProperty_2_SetClassValueAction<TContainer, TValue>* ___m_SetClassValueAction;

  /// @brief Field <Name>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x50, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::ReflectedMemberProperty_2, "Unity.Properties", "ReflectedMemberProperty`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::ReflectedMemberProperty_2_GetClassValueAction, "Unity.Properties", "ReflectedMemberProperty`2/GetClassValueAction");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::ReflectedMemberProperty_2_GetStructValueAction, "Unity.Properties", "ReflectedMemberProperty`2/GetStructValueAction");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::ReflectedMemberProperty_2_SetClassValueAction, "Unity.Properties", "ReflectedMemberProperty`2/SetClassValueAction");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::ReflectedMemberProperty_2_SetStructValueAction, "Unity.Properties", "ReflectedMemberProperty`2/SetStructValueAction");
